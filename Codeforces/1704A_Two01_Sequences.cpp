#include <bits/stdc++.h>
using namespace std;

int main (void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        string a, b; cin >> a >> b;
        if(a.substr(n - m + 1, m) != b.substr(1, m-1)) cout << "NO\n";
        else {
            bool res = false;
            for(int i = 0; i <= n-m; i++) {
                if(a[i] == b[0]) {
                    res = true;
                    break;
                }
            }
            if(res) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}