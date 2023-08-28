#include <bits/stdc++.h>
using namespace std;
int n, m, x, y, visited[54][54], tmp, ret = 0;
char a[54][54];
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};
int bfs(int y, int x){
    queue<pair<int,int>> q;
    fill(&visited[0][0], &visited[0][0] + 54*54, 0);
    visited[y][x] = 1;
    tmp = 1;
    q.push({y, x});
    while(q.size()){
        tie(y, x) = q.front(); q.pop();
        for(int i = 0; i < 4; i++){
            int ny = y + dy[i];
            int nx = x + dx[i];
            if(ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
            if(visited[ny][nx]) continue;
            if(a[ny][nx] == 'L'){
            visited[ny][nx] = visited[y][x] + 1;
            tmp = max(tmp, visited[ny][nx]);
            q.push({ny,nx});
            }
        }
    }
    return tmp;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == 'L') {
                fill(&visited[0][0], &visited[0][0] + 54*54, 0);
                ret = max(bfs(i,j), ret);
            }
        }
    }
    cout << ret - 1 << '\n';
    return 0;
}