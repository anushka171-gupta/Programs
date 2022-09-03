#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int down = 0, res = 0;
        for(int i = 1; i < n-1; i++) {
            if(a[i] < a[i-1]) down = 1;
            if(a[i] < a[i+1] && down) {
                res = 1;
                break;
            }
        }

        if(res) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}