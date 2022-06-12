#include <bits/stdc++.h>
using namespace std;
 
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
        cin >> a[i];
        int res = 0; 
        for(int i = 0; i < n; i++) {
            if(m < a[i]) {
                res += a[i] - m;
                m = a[i];
            }
            m -= a[i];
        }
 
        cout << res << "\n";
    }
    
    return 0;
}
