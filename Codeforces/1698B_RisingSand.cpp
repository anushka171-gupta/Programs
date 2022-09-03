#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {

        int n, k; cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
        
        if(k == 1) {
            cout << (n - 1) / 2 << "\n";
            continue;
        }

        int res = 0;
        for(int i = 1; i < n-1; i++) {
            if(a[i] > (a[i-1] + a[i + 1])) {
                res++;
                i++;
            }
        }
        
        cout << res << "\n";
    }
    
    return 0;
}