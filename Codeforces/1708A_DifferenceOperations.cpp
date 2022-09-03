#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if(a % b == 0) return b;
    return gcd(b, a % b);
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        cin >> a[0];
        int g = a[0];
        for(int i = 1; i < n; i++) {
            cin >> a[i];
            g = gcd(g, a[i]);
        }
        if(g == a[0]) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}