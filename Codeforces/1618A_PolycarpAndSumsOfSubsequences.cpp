// 1618A_PolycarpAndSumsOfSubsequences

#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n = 7;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        cout << a[0] << " " << a[1] << " " << a[6] - a[0] - a[1] << "\n"; 
    }

    return 0;
}