#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int res = 0;
        for(int i = 0; i < k; i++) {
            if(a[i] > k) res++;
        }

        cout << res << "\n";
    }
    
    return 0;
}