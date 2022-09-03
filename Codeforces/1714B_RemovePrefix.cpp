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

        unordered_map<int, int> h;
        int res = 0;
        for(int i = n-1; i >= 0; i--) {
            if(h.find(a[i]) != h.end()) {
                res = i + 1;
                break;
            }
            h[a[i]] = 1;
        }

        cout << res << "\n";
    }

    return 0;
}