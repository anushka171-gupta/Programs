#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for(int i = 0; i < n; i++) {
            cin >> b[i];
        }

        string res = "YES\n";
        if(a[0] > b[0]) {
            res = "NO\n";
            cout << res ;
            continue;
        }
        for(int i = 1; i < n; i++) {
            if(abs(a[i] - a[i-1]) != abs(b[i] - b[i-1]) || a[i] > b[i]) {
                res = "NO\n";
                break;
            }
        }

        cout << res ;
    }
    
    return 0;
}