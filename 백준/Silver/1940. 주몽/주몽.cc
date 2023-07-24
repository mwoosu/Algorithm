#include <bits/stdc++.h>
using namespace std;
int n, m, cnt;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(m == arr[i] + arr[j]){
                cnt++;
            }
        }
    }
    cout << cnt << '\n';
    return 0;
}