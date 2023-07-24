#include <bits/stdc++.h>
using namespace std;
int n, m;
string arr[100004];
unordered_map<string, int> mp;
string temp;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        mp[arr[i]] = i + 1;
    }
    for(int i = 0; i < m; i++){
        cin >> temp;
        int t = atoi(temp.c_str());
        if(t){
            cout << arr[t - 1] << '\n';
        }
        else {
            cout << mp[temp] << '\n';
        }
    }
    return 0;
}