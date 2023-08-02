#include <bits/stdc++.h>
using namespace std;
int n, a[104][104], visited[104][104], h, cnt, ret, temp;
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};
void dfs(int y, int x, int h){
    visited[y][x] = 1;
    for(int i = 0; i < 4; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny < 0 || nx < 0 || ny >= n || nx >= n) continue;
        if(a[ny][nx] <= h) continue;
        if(visited[ny][nx]) continue;
        dfs(ny, nx, h);
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
            temp = max(temp, a[i][j]);
        }
    }
    for(int h = 0; h <= temp; h++){
        memset(visited, 0, sizeof(visited));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(a[i][j] > h && !visited[i][j]) {
                    cnt++;
                    dfs(i, j, h);
                }
            }
        }
        ret = max(ret, cnt);
        cnt = 0;
    }
    cout << ret << '\n';
    return 0;
}