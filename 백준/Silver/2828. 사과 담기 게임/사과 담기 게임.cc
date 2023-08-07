#include <bits/stdc++.h>
using namespace std;
int n, m, j, tmp, ret;
pair<int, int> p;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m >> j;
    p = {1, m};
    for(int i = 0 ; i < j; i++){
        cin >> tmp;
        if(tmp < p.first){
            ret += p.first - tmp;
            p.first = tmp;
            p.second = tmp + m - 1;
        }
        else if(tmp > p.second){
            ret += tmp - p.second;
            p.first = tmp - m + 1;
            p.second = tmp;
        }
    }
    cout << ret << '\n';
    return 0;
}