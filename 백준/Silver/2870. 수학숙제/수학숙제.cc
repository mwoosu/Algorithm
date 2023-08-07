#include <bits/stdc++.h>
using namespace std;
int n;
string s;
void o(string& s){
    if(s[0] != '0') return;
    if(s.size() > 1 && s[0] == '0'){
        s.erase(0, 1);
        o(s);
    }
}
bool compare(string &a, string &b){
    if(a.length() == b.length()){
        return a < b;
    }
    else return a.length() < b.length();
}
vector<string> ret;
int main() {
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> s;
        stringstream ss;
        int idx = 1;
        for(char c : s){
            if(isdigit(c)){
                ss << c;
            }
            if(!isdigit(c) || idx == s.size()){
                if(ss.str().size()){
                    string tmp = ss.str().c_str();
                    ret.push_back(tmp);
                    ss.str("");
                }
            }
            idx++;
        }
    }
    for(auto& it : ret){
        o(it);
    }
    sort(ret.begin(), ret.end(), compare);
    for(auto it : ret){
        cout << it << '\n';
    }
    return 0;
}