#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        if(n == 1) cout << 1;
        else if(n & 1) {
            cout << 1 << " " << 3 << " " << 2 << " "; 
            for(int i = 4; i <= n; i += 2) {
                cout << i + 1 << " " << i << " ";
            }
        }
        else {
            cout << 2 << " " << 1 << " ";
            for(int i = 3; i <= n; i += 2) {
                cout << i + 1 << " " << i << " ";
            }
        }
        cout << "\n";
    }
    
    return 0;
}