#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        int res = 0, k = 0, temp, x = INT_MAX, even = 0, odd = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] & 1) {
                odd++;
            }
            else {
                temp = a[i];
                k = 0;
                while(!(temp & 1)) {
                    temp /= 2;
                    k++;
                }
                x = min(x, k);
                even++;
            }
        }
        if(odd) res += even;
        else if(even) res += x + even - 1;
        cout << res << "\n";
    }
    return 0;
}
