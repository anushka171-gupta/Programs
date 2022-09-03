#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for(int i = 0; i < n; i++) {
            cin >> b[i];
        }

        int bs = 0, as = 0;
        for(int i = 0; i < n; i++) {
            if(a[i] < b[i]) {
                as += b[i] - a[i];
            }
            else if(b[i] < a[i]) {
                bs += a[i] - b[i];
            }
        }

        if(as != bs) {
            cout << -1 << "\n";
            continue;
        }
        
        cout << as << "\n";
    }
    
    return 0;
}