#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, q; cin >> n >> q;
        vector<int> a(n), m(n);
        int temp = -1;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            temp = max(temp, a[i]);
            m[i] = temp;
        }

        while(q--) {
            int i, k; cin >> i >> k;
            i--;

            if(k < (i - 1)) cout << 0 << "\n";
            else if(m[i] > a[i]) cout << 0 << "\n";
            else if(m[i] == a[i]) cout << min(n-1, (k - (i - 1))) << "\n";
        }
    }
    
    return 0;
}