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
            cin >> a[i];
        }

        vector<bool> used(n + 1, 0);
        sort(a.begin(), a.end());

        bool res = true;
        for(int i = n-1; i >= 0; i--) {
            while(a[i] && (a[i] > n || used[a[i]])) 
                a[i] /= 2;
            if(!a[i]) {
                res = false;
                break;
            }
            used[a[i]] = true;
        }
        if(res) cout << "YES\n";
        else cout << "NO\n";

    }

    return 0;
}