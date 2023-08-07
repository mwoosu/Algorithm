#include <bits/stdc++.h>
using namespace std;
int h, w, a[104];
char tmp;
void go(int idx, int a[], int size){
    if(idx == size - 1) return;
    if(a[idx + 1] == 0) {
        go(idx + 1, a, size);
        return;
    }else {
        a[idx + 1] = a[idx] + 1;
        go(idx + 1, a, size);
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> h >> w;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> tmp;
            if(tmp == 'c'){
                a[j] = 0;
            }
            else a[j] = -1;
        }
        for(int j = 0; j < w; j++){
            if(a[j] == 0){
                go(j, a, w);
            }
            cout << a[j] << ' ';
            a[j] = 0;
        }
        cout << '\n';
    }
    return 0;
}