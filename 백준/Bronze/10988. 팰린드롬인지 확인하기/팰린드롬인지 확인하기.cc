#include <bits/stdc++.h>
using namespace std;
string str, rev;
int main() {
    cin >> str;
    rev = str;
    reverse(rev.begin(), rev.end());
    bool is_palindrom = (str == rev);
    cout << is_palindrom << '\n';
    return 0;
}