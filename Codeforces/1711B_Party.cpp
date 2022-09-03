#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {

        int n, m; cin >> n >> m;
        unordered_map<int, vector<int>> adj;
        map<int, int> deg;

        vector<int> a(n + 1);
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        int x, y;
        for(int i = 0; i < m; i++) {

            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);

            deg[x]++;
            deg[y]++;
        }

        if(!(m & 1)) {
            cout << 0 << "\n";
            continue;
        }

        int res = 1e9;
        for(int i = 1; i <= n; i++) {
            if(deg[i] & 1) {
                res = min(res, a[i]);
            }
            else {
                for(auto &x: adj[i]) {
                    if(!(deg[x] & 1)) {
                        res = min(res, a[i] + a[x]);
                    }
                }
            }
        }

        cout << res << "\n";
    }
    
    return 0;
}