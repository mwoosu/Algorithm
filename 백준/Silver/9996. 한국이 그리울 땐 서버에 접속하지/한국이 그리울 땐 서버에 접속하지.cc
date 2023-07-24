#include <bits/stdc++.h>
using namespace std;
int t, idx;
string pat, str, pre, suf;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> t >> pat;
    idx = pat.find('*');
    pre = pat.substr(0, idx);
    suf = pat.substr(idx + 1);
    for(int i = 0; i < t; i++){
        cin >> str;
         if(pre.size() + suf.size() > str.size()){// 반례. ab*ab, ab
            cout << "NE" << '\n';
         }else{
             if(pre == str.substr(0, pre.size()) && suf == str.substr(str.size() - suf.size())) cout << "DA\n";
             else cout <<"NE\n";  
         } 
    }
    return 0;
}