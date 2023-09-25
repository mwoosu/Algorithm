#include <bits/stdc++.h>
using namespace std;
int n, tmp, a[1000001];
stack<pair<int,int>> stk;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        while(stk.size() && tmp > stk.top().second){
            a[stk.top().first] = tmp;
            stk.pop();
        }
        stk.push({i, tmp});
    }
    if(stk.size()){
        while(stk.size()){
            a[stk.top().first] = -1;
            stk.pop();
        }
    }
    for(int i = 0; i < n; i++){
        cout << a[i] << ' ';
    }
    return 0;
}