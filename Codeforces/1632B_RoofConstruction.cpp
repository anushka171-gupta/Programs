#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<vector<int>> a;
        vector<int> temp;
        for(int i = n-1; i >= 0; i--) {
            temp.push_back(i);
            if(i && (i == (i & ~(i - 1)))) {
                a.push_back(temp);
                temp.clear();
            }
        } 
        if(temp.size()) a.push_back(temp);

        vector<int> res;
        int m =a.size();

        for(int i = 0; i < m / 2; i++) {
            for(int j = 0; j < a[i].size(); j++) {
                res.push_back(a[i][j]);
            }
             for(int j = 0; j < a[m-i-1].size(); j++) {
                res.push_back(a[m-1-i][j]);
            }
        }

        if(m & 1) {
            for(int j = 0, i = m / 2; j < a[i].size(); j++) {
                res.push_back(a[i][j]);
            }
        }

        for(auto &x: res) cout << x << " ";
        cout << "\n";
    }
    
    return 0;
}
