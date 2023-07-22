#include <bits/stdc++.h>
using namespace std;
string str;
vector<int> alp(26);
int main() {
    cin >> str;
    sort(str.begin(), str.end());
    for(char& tmp : str) {
        alp[tmp - 'a']++;
    }
    for(auto it : alp) cout << it << ' ';
    return 0;
}