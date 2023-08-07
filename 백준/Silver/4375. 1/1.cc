#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    while(cin >> n){
        int num = 1;
        int ret = 1;
        while (num % n != 0) {
            num = (num * 10 + 1) % n;
            ret++; 
        }
        cout << ret << '\n';
    }
    return 0;
}