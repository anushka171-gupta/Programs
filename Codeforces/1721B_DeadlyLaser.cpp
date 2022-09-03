#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, m, x, y, d; 
        cin >> n >> m >> x >> y >> d;

        int d1 = (n - x) + (m - y);
        int d2 = x - 1;
        int d3 = n - x;
        int d4 = y - 1;
        int d5 = m - y;

        // cout << d1 << " " << d2 << " " << d3 << " " << d4 << " " << d5 << "\n";
        if(d1 <= d || (d2 <= d && d3 <= d) ||
         (d4 <= d && d5 <= d) || (d3 <= d && d5 <= d)) cout << -1 << "\n";

        else cout << (n + m - 2) << "\n";
    }
    
    return 0;
}