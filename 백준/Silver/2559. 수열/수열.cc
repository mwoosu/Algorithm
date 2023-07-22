#include <bits/stdc++.h>
using namespace std;
int n, k, temp;
int psum[100004];
vector<int> ret;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        cin >> temp;
        psum[i] += psum[i-1] + temp;
    }
    for(int i = 0; i <= n - k; i++){
        ret.push_back(psum[i + k] - psum[i]);
    }
    auto it = max_element(ret.begin(),ret.end());
    cout << *it <<'\n';
    return 0;
}