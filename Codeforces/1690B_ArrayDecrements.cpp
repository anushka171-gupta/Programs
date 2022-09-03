#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++) 
            cin >> a[i];
        for(int i = 0; i < n; i++)
            cin >> b[i];
        
        bool res = true;
        for(int i = 0; i < n; i++) {
            if(a[i] < b[i]) {
                res = false;
                break;
            }
        }

        if(res) cout << "YES\n";
        else cout << "NO\n";
    }
    
    return 0;
}