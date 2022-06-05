#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    
    while(t--) {
        int l, r; cin >> l >> r;
        bool flag = false;
        for(int i = l; i + 3 <= r; i++) {
            int a = i;
            int b = i + 1;
            int c = i + 2;
            int d = i + 3;
            int x = a ^ b ^ c ^ d;
            if(x == 0 && x <= r) {
                flag = true;
                cout << a << " " << b << " " << c << " " << d << "\n";
                break;
            }
        }
        if(!flag) cout << -1 << "\n";
    }
    return 0;
}
