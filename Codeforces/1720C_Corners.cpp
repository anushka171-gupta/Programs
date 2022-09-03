#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        vector<vector<int>> g(n + 2, vector<int> (m + 2, -1));
        int res = 0;
        char c;
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= m; j++) {
                cin >> c;
                g[i][j] = c - '0';
                if(g[i][j]) res++;
            }
        }
        // cout << "one" << " " << res << "\n";
        int zero_max = 0;
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= m; j++) {
                if(g[i][j]) {
                    int zero = 0;

                    if(!g[i - 1][j]) zero++;
                    if(!g[i - 1][ j - 1]) zero++;
                    if(!g[i][j - 1]) zero++;

                    zero_max = max(zero, zero_max);

                    zero = 0;
                    if(!g[i - 1][j]) zero++;
                    if(!g[i - 1][j + 1]) zero++;
                    if(!g[i][j + 1]) zero++;

                    zero_max = max(zero, zero_max);
                    zero = 0;
                    if(!g[i + 1][j]) zero++;
                    if(!g[i + 1][ j - 1]) zero++;
                    if(!g[i][j - 1]) zero++;

                    zero_max = max(zero, zero_max);
                    zero = 0;
                    if(!g[i + 1][j]) zero++;
                    if(!g[i + 1][ j + 1]) zero++;
                    if(!g[i][j + 1]) zero++;

                    zero_max = max(zero, zero_max);

                    // cout << i << " " << j << " " << zero_max << "\n";
                }
            }
        }
// cout << "\n\n";
//         cout << zero_max << "\n";
        if(zero_max == 1) res--;
        else if(!zero_max) res = max(0, res - 2);
        cout << res << "\n";
    }
    
    return 0;
}