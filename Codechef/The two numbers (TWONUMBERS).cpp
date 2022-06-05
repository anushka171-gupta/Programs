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
        long long a = 0, b = 0;
        long long res = 0;
        if(n == 2) cout << 0 << "\n";
        else {
        if(!(n & 1)) {
            if((n / 2) & 1) {
                a = (n /2) - 2;
                b = n - a;
            }
            else {
                a = (n / 2) - 1;
                b = n - a;
            }
        }
        else {
            a = n / 2;
            b = n - a;
        }
        long long g = gcd(max(a, b), min(a, b));
        long long l = (a * b) / g;
        res = l - g;
            cout << res << "\n";
        }
    }
    return 0;
}
