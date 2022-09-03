#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        int y = n-1, x = m-1;
        if(n == 1) {
            if(x % 2 == 0) cout << "Tonya\n";
            else cout << "Burenka\n";
        }
        else if(m == 1) {
            if(y % 2 == 0) cout << "Tonya\n";
            else cout << "Burenka\n";
        }
        else if((n == m && n == 2))
             cout << "Tonya\n";
        else if((n & 1) == (m & 1))
            cout << "Tonya\n";
        else cout << "Burenka\n";
    }
    
    return 0;
}