#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> res(n);
        int x = 0;
        for(int i = 0; i < n-2; i++) {
            res[i] = i + 1;
            x ^= x;
        }

        if(!x) {
            x ^= res[n-3];
            res[n-3]++;
            x ^= res[n-3];
        }
        res[n-2] = pow(2, 30);
        res[n-1] = x ^ res[n-2];

        int x1 = 0, x2 = 0;
        for(int i = 0; i < n; i += 2) {
            x1 ^= res[i];
        }

        for(int i = 1; i < n; i += 2) {
            x2 ^= res[i];
        }

        cout << x1 << " " << x2 << "\n";
        for(auto &x: res) cout << x << " ";
        cout << "\n";
    }
    
    return 0;
}