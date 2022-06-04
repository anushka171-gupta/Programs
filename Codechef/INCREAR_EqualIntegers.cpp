#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        long x, y;
        cin >> x >> y;
        if(x < y) {
            cout << y - x << "\n";
        }
        else if(x > y) {
            if((x - y) % 2) cout << (long)ceil((x - y) / 2.0) + 1 << "\n";
            else cout << (long)ceil((x - y) / 2.0) << "\n";
        }
        else cout << 0<< "\n";
    }
    return 0;
}
