#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, k, r, c; cin >> n >> k >> r >> c;
        vector<vector<char>> table(n, vector<char> (n, '.'));

        table[r-1][c-1] = 'X';
        r-=1;
        c-=1;
        while((c - k) >= 0) {
            c -= k;
        }

        while((r - k) >= 0) {
            r -= k;
        }

        while(r != 0) {
            r--;
            c++;
        }
        while((c - k) >= 0) c -= k;
        int i;
        int col = c;

        for(int i = 0; i < n; i++) {
            if(col < 0) col = k-1;
            for(int j = col; j < n; j += k) {
                table[i][j] = 'X';
            }
            col--;
        }

        for(auto &x: table) {
            for(auto &y: x) cout << y ;
            cout << "\n";
        }
    }
    
    return 0;
}