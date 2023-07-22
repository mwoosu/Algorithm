#include <bits/stdc++.h>
using namespace std;
string name;
vector<int> cnt(26, 0);
string ans;
int t;
int main() {
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> name;
        cnt[name[0] - 'a']++;
    }
    for(int j = 0; j < 26; j++){
        if(cnt[j] > 4) ans += 'a' + j;
    }
    if(ans == "") cout << "PREDAJA" << '\n';
    else cout << ans <<'\n';

    return 0;
}