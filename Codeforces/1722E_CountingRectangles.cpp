#include <bits/stdc++.h>
using namespace std;
 
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n, q; cin >> n >> q;
        vector<vector<unsigned long long>> rec(n, vector<unsigned long long> (2));
        for(int i = 0; i < n; i++) {
            cin >> rec[i][0] >> rec[i][1];
            rec[i][2] = rec[i][0] * rec[i][1];
        }

        sort(rec.begin(), rec.end());
        
        while(q--) {
 
            int hs, ws, hb, wb; 
            cin >> hs >> ws >> hb >> wb;

            // auto ub = upper_bound(rec.begin(), rec.end(), {hs, ws});
            unsigned long long res = 0;
            for(int i = 0; i < n; i++) {
                int h = rec[i][0];
                int w = rec[i][1];
                if(h > hs && h < hb && w > ws && w < wb) {
                    res += rec[i][2];
                }
            }
 
            cout << res << "\n";
        }
 
    }
    
    return 0;
}