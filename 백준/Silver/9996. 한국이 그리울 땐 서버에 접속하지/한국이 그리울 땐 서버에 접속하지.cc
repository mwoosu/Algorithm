#include <bits/stdc++.h>
using namespace std;
int t, idx;
string pat, str, frnt, bck;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> t >> pat;
    idx = pat.find('*');
    frnt = pat.substr(0, idx);
    bck = pat.substr(idx + 1,pat.size());
    for(int i = 0; i < t; i++){
        cin >> str;
        string ftemp, btemp;
        if(str.size() < frnt.size() + bck.size()){
            cout << "NE" << '\n';
            continue;
        }
        for(int j = 0; j < frnt.size(); j++){
            ftemp += str[j];
        }
        for(int k = 0; k < bck.size(); k++){
            btemp += str[str.size()- bck.size() + k];
        }
        if(frnt == ftemp && bck == btemp) cout << "DA" << '\n';
        else cout << "NE" << '\n';
    }
    return 0;
}