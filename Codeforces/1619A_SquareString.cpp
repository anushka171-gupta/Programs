#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int i = s.length() / 2;
        if(s.length() & 1) cout << "NO\n";
        else if(s.substr(0, i) == s.substr(i, i)) cout << "YES\n";
        else cout << "NO\n";
    }
}