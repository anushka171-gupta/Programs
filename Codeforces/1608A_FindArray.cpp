#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        for(int i = 2; i <= n+1; i++) {
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}