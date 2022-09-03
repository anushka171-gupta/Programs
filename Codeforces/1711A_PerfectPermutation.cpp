#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {

        int n; cin >> n;
        vector<int> a(n + 1);
        
        if(!(n & 1)) {
            int c = 1;
            for(int i = 0; i < n; i += 2, c += 2) {
                cout << c + 1 << " " << c << " ";
            }
        }
        else {
            if(n == 1) cout << 1;
            else {
                cout << 2 << " " << 3 << " " << 1 << " ";
                int c = 4; 
                for(int i = 3; i < n; i += 2, c += 2) {
                    cout << c + 1 << " " << c << " ";
                }
            }
        }

        cout << "\n";
    }
    
    return 0;
}