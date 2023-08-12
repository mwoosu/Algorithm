#include <bits/stdc++.h>
using namespace std;
int n, m, a[104][104], visited[104][104], ret, cnt, flag;
vector<pair<int, int>> meltList;
const int dy[] = {-1, 0, 1, 0};
const int dx[] = {0, 1, 0, -1};
void go(int y, int x){
    visited[y][x] = 1;
    if(a[y][x] == 1) {
            a[y][x] = 2;
            return;
        }
    for(int i = 0; i < 4; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
        if(visited[ny][nx]) continue;
        go(ny, nx);
    }
    return;
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
    while(true){
        meltList.clear();
        flag = 0;
        cnt++;
        fill(&visited[0][0], &visited[0][0] + 104*104, 0);
        go(0,0);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(a[i][j] == 1) flag++;
                if(a[i][j] == 2) {
                    meltList.push_back({i, j});
                }
            }
        }
        if(flag){
            for(auto idx : meltList){
                a[idx.first][idx.second] = 0;
            }
        }
        else if(flag == 0) {
            cout << cnt << '\n';
            cout << meltList.size() << '\n';
            break;
        }
        
    }
    return 0;
}