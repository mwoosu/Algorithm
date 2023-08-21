#include <bits/stdc++.h>
using namespace std;
int n, m, sum, a[50][50], i = 1, ret = 987654321;
vector<int> b;
vector<pair<int,int>> chicken;
vector<pair<int,int>> home;
void combi(int start, vector<int> b){
        if(b.size() == m) {
            int tmp[200];
            fill(tmp, tmp + 200, 0);
             for(auto i : b){
                for(int j = 0; j < home.size(); j++){
                    int tmpr = chicken[i - 1].first - home[j].first;
                    int tmpc = chicken[i - 1].second - home[j].second;
                    if(tmpr < 0) tmpr *= -1;
                    if(tmpc < 0) tmpc *= -1;
                    if(tmp[j] == 0) tmp[j] = tmpr + tmpc;
                    else tmp[j] = min(tmp[j], tmpr + tmpc);
                }
             }
             ret = min(accumulate(tmp, tmp + 200, 0), ret);
        }
        for(int i = start + 1; i <= chicken.size(); i++){
            b.push_back(i);
            combi(i, b);
            b.pop_back();
        }
    return;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
            if(a[i][j] == 2) chicken.push_back({i + 1, j + 1});
            if(a[i][j] == 1) home.push_back({i + 1, j + 1});
        }
    }
    combi(0, b);
    cout << ret <<'\n';
    return 0;
}