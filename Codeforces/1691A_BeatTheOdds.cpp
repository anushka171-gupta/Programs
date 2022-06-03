#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a, odd = 0, even = 0;
        for(int i = 0 ; i < n; i++) {
            cin >> a;
            if(a & 1) odd++;
            else even++;
        }
        cout << min(even, odd) << "\n";
    }
    return 0;
}
