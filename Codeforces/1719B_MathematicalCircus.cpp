#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    vector<int> start = {0, 3, 2, 1};
    while(t--) {
        int n, k; cin >> n >> k;
        if(k % 4 == 0) cout << "NO\n";
        else {
            vector<bool> temp(n + 1, false);
            vector<vector<int>> res(n, vector<int> (2, -1));
            int i = 0;

            if(k % 4 == 1) {
                res[0][0] = 1;
                res[0][1] = 2;
                temp[1] = temp[2] = true;
                i++;
            }

            int x = 0;
            for(int j = start[k % 4]; j <= n; j += 4, i++) {
                res[i][0] = j;
                temp[j] = true;
            }

            if(x >= (n / 2)) x = 0;
            x = i;
            // cout << x << "\n";
            if(i != (n / 2)) {
                for(int j = 4; j <= n && i < (n / 2); j += 4, i++) {
                    if(res[i][1] == -1) {
                        res[i][1] = j;
                        temp[j] = true;
                    }
                } 
            }

            i = x;
            for(int j = 1; j <= n && i < n / 2; j++) {
                if(!temp[j] && res[i][0] == -1) {
                    res[i][0] = j;
                    i++;
                    temp[j] = true;
                }
            }

            i = 0;
            for(int j = 1; j <= n && i <= n/2; j++) {
                if(!temp[j] && res[i][1] == -1) {
                    res[i][1] = j;
                    i++;
                }
                else if(res[i][1] != -1) i++;
                // cout << j << " " << i << "..\n";
            }

            cout << "YES\n";
            for(int i = 0; i < n / 2; i++) {
                cout << res[i][0] << " " << res[i][1] << "\n";
            }
        }
    }
    
    return 0;
}