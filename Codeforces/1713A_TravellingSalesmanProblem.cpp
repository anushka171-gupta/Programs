#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<vector<int>> c(n, vector<int> (2));

        int up = 0, left = 0, right = 0, down = 0;
        for(int i = 0; i < n; i++) {
            cin >> c[i][0] >> c[i][1] ;
            up = max(up, c[i][1]);
            down = min(down, c[i][1]);
            left = min(left, c[i][0]);
            right = max(right, c[i][0]);
        }

        left = abs(left);
        down = abs(down);

        long long res = 2 * (up + down + left + right);
        cout << res << "\n";

    }
    
    return 0;
}