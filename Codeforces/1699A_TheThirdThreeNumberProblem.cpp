#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        if(n & 1) cout << -1 << "\n";
        else cout << 0 << " "<< n/2 << " " << n/2 << "\n";
    }
    
    return 0;
}