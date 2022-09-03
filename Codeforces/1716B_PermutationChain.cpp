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
            a[i] = i + 1;
        }

        cout << n << "\n";
        vector<vector<int>> res;
        for(auto &x: a) {
            cout << x << " ";
        }
        cout << "\n";
        for(int i = 1; i < n; i++) {
            swap(a[n-i], a[n-i-1]);
            for(auto &x: a) {
                cout << x << " ";
            }
            cout << "\n";
        }
    }
    
    return 0;
}