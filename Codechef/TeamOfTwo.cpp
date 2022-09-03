#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<vector<int>> a(n, vector<int> (6, 0));
        for(int i = 0; i < n; i++) {
            cin >> a[i][0];
            for(int j = 1; j <= a[i][0]; j++) {
                cin >> a[i][j];
            }
        }
        
        string res = "NO";
        for(int i = 0; i < n; i++) {
            vector<int> b(6, 0);
            for(int k = 1; k <= a[i][0]; k++) {
                b[a[i][k]]++;
            }

            for(int j = i + 1; j < n; j++) {
                vector<int> p(6, 0);
                // cout << a[j][0] << "\n";
                for(int k = 1; k <= a[j][0]; k++) {
                    p[a[j][k]]++;
                }

                vector<int> c = {p[1] + b[1], p[2] + b[2], 
                p[3] + b[3], p[4] + b[4], p[5] + b[5]};

                if(c[0] && c[1] && c[2] && c[3] && c[4]) {
                    res = "YES";
                    break;
                }
            }

            if(res == "YES" ) break;
        }

        cout << res << "\n";
    }
    
    return 0;
}