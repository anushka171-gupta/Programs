#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        string t = "Timur";
        sort(t.begin(), t.end());
        int n; cin >> n;
        string s; cin >> s;
        sort(s.begin(), s.end());
        if(s == t) cout << "YES\n";
        else cout << "NO\n";
    }
    
    return 0;
}