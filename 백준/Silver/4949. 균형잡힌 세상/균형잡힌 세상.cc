#include <bits/stdc++.h>
using namespace std;
string s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    while (true){
        getline(cin, s);
        if(s == ".") break;
        stack<char> stk;
        for (int i = 0; i < s.size(); i++){
            if (s[i] == '(' || s[i] == '['){
                stk.push(s[i]);
            }
            else if (stk.empty() && (s[i] == ')' || s[i] == ']')){
                stk.push(s[i]);
                break;
            }
            else if (stk.size() && s[i] == ')'){
                if (stk.top() == '(') stk.pop();
                else break;
            }
            else if (stk.size() && s[i] == ']'){
                if (stk.top() == '[') stk.pop();
                else break;
            }
        }
        if(stk.empty())
            cout << "yes" << '\n';
        else
            cout << "no" << '\n';
    }
    return 0;
}