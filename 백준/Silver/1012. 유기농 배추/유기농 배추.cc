#include <bits/stdc++.h>
using namespace std;
int t, m, n, k, x, y, a[54][54], visited[54][54];
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};
void dfs(int y, int x){
    if (visited[y][x]) return;
    visited[y][x] = 1;
    for (int i = 0; i < 4; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if (ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
        if(a[ny][nx]) dfs(ny, nx);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> t;
    for (int i = 0; i < t; i++){
        int ret = 0;
        cin >> m >> n >> k;
        for (int j = 0; j < k; j++){
            cin >> x >> y;
            a[y][x] = 1;
        }
        for (int r = 0; r < n; r++){
            for (int c = 0; c < m; c++){
                if (a[r][c] && !visited[r][c]){
                    ret++;
                    dfs(r, c);
                }
                a[r][c] = 0;
                visited[r][c] = 0;
            }
        }
        cout << ret << '\n';
    }
    return 0;
}