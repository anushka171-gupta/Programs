#include <bits/stdc++.h>
using namespace std;
 
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<vector<int>> a(n, vector<int> (2));
        for(int i = 0; i < n; i++) {
            cin >> a[i][0];
        }
 
        for(int i= 0; i < n; i++) {
            cin >> a[i][1];
        }
 
        sort(a.begin(), a.end(), [] (vector<int> &a, vector<int> &b) {
            return a[0] < b[0];
        });
 
        vector<int> res;
        res.push_back(a[0][1] - a[0][0]);
        int maxi = a[0][1];
        for(int i = 1; i < n; i++) {
            maxi = max(maxi, a[i][0]);
            // cout << maxi << " ";
            res.push_back(a[i][1] - maxi);
            maxi = max(maxi, a[i][1]);
        }  
        for(int i = 0; i < n; i++) {
            cout << res[i] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}
