#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        if(n == m && n == 1) cout << 0 << "\n";
        else {
            if(n < m) swap(n, m);
            long long res = n + 2 * (m - 1);
            cout << res << "\n";
        }
    }
    
    return 0;
}