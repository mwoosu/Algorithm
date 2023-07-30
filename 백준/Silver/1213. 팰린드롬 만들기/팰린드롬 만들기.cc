#include <bits/stdc++.h>
using namespace std;
string s, ret;
char mid;
int arr[200], flag;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> s;
    for(char a : s) arr[a]++;
    for(int i = 'Z'; i >= 'A'; i--){
        if(arr[i]){
            if(arr[i] & 1){ 
            mid = char(i); flag++;
            arr[i]--;
            }
            if(flag == 2)break;
            for(int j = 0; j < arr[i]; j+=2){
                ret = char(i) + ret;
                ret += char(i);
            }
        }
    }
    if(mid)ret.insert(ret.begin() + ret.size() / 2, mid);
    if(flag == 2) cout << "I'm Sorry Hansoo";
    else cout << ret << "\n";
    return 0;
}