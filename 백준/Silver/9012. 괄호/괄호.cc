#include <bits/stdc++.h>
using namespace std;
int t; 
string s;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> s;
        stack<char> stk;
        for(auto c : s){
            if(stk.size()){
                if(stk.top() == '(' && c == ')') {
                    stk.pop();
                }
                else stk.push(c);
            }else stk.push(c);
        }
        if(stk.size()) cout << "NO" << '\n';
        else cout << "YES" << '\n';
    }
    return 0;
}