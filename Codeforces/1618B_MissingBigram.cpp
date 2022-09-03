#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<string> a(n-2);
        for(int i = 0; i < n-2; i++) {
            cin >> a[i];
        }

        string res = "";
        res += a[0][0];

        for(int i = 1; i < n-2; i++) {
            if(a[i-1][1] == a[i][0]) res += a[i][0];
            else {
                // cout << res << "\n";
                // cout << a[i-1][1] << " " << a[i][0] << "\n";
                res += a[i-1][1];
                res += a[i][0];
                // cout << res << "\n";
            }
        }
        res += a[n-3][1];

        if(res.length() == n) cout << res << "\n";
        else {
            res += 'a';
            cout << res << "\n";
        }
    }

    return 0;
}