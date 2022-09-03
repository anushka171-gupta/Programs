#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        if(n == 1) cout << 1 << "\n";
        else if(n == 2) cout << 4 << "\n";
        else if(n == 3) cout << 7 << "\n";
        else {
            long long res = n;
            res += (n / 2) * 2;
            res += (n / 3) * 2;
            cout << res << "\n";
        }
    }
    
    return 0;
}