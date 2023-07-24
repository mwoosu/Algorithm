#include <bits/stdc++.h>
using namespace std;
int t, n;
string s1, s2;
unordered_map<string, int> mp;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> t;
    for(int i = 0; i < t; i++){
        int ret = 1;
        mp.clear();
        cin >> n;
        for(int j = 0; j < n; j++){
            cin >> s1 >> s2;
            mp[s2]++;
        }
        for(auto it : mp){
            ret *= it.second + 1;
        }
        cout << ret - 1 << '\n';
    }
    return 0;
}