#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, x; cin >> n >> x;
        vector<int> a(2 * n);
        for(int i = 0; i < 2 * n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        
        string res = "YES\n";
        for(int i = 0; i < n; i++) {
            if(a[i] + x > a[i + n]) {
                res = "NO\n";
                break;
            }
        }

        cout << res ;
    }

    return 0;
}