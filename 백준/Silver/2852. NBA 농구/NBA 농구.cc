#include <bits/stdc++.h>
using namespace std;
int n, t, m, s, acnt, bcnt, a[104], aret, bret, flag = 0;
int main() {
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d %2d:%2d",&t, &m, &s);
        a[i] = s + 60*m;
        if(t == 1){
            acnt++;
        }else bcnt++;
        if(acnt == bcnt){
            if(t == 1) bret += a[i] - a[flag];
            else aret += a[i] - a[flag];
            flag = i + 1;
        }
    }
    if(flag){
        if(acnt > bcnt) aret += 2880 - a[flag];
        else if(acnt < bcnt) bret += 2880 - a[flag];
    }else{
        if(acnt > bcnt) aret += 2880 - a[0];
        else if(acnt < bcnt) bret += 2880 - a[0];
    }
    int amm = aret / 60;
    int ass = aret % 60;
    int bmm = bret / 60;
    int bss = bret % 60;

    printf("%02d:%02d\n", amm, ass);
    printf("%02d:%02d\n", bmm, bss);
    return 0;
}