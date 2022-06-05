#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n, x; cin >> n >> x;
        if(n % 2 == 0 && x % 2 == 0) cout << "YES\n";
        else if(n % 2 != 0 && x % 2 != 0) cout << "YES\n";
        else if(n % 2 == 0 && x % 2 != 0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
