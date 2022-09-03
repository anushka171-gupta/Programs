#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int l, r; cin >> l >> r;
        int res = 0, a = INT_MAX, b = INT_MAX, res1 = 0;
        for(int i = l, j = r; i <= r; i++, j--) {
            if((a & i) == 0) res++;
            else a &= i;
            if((b & j) == 0) res1++;
            else b &= j;
            cout << res << " " << res1 << "\n";
        }


        cout << min(res, res1) << "\n";
    }

    return 0;
}