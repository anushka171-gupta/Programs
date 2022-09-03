#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int x = ceil(n / 3.0) - 1;
        x += 2;
        cout << x - 1 <<" " <<  x << " " << x - 2 << "\n";
    }
    
    return 0;
}