#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if(a % b == 0) return b;
    return gcd(b, a % b);
}

void s(int &a, int &b, int &c, int &d) {
    int g1 = gcd(a, b);
    int g2 = gcd(c, d);

    a /= g1;
    b /= g1;

    c /= g2;
    d /= g2;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int a, b, c, d; cin >> a >> b >> c >> d;
        s(a, b, c, d);
        if(a == c && b == d) cout << 0 << "\n";
        else if(a == c && !a) cout << 0 << "\n";
        else if(!a || !c) cout << 1 << "\n";
        else if(a % c == 0 && d % b == 0) cout << 1 << "\n";
        else if(c % a == 0 && b % d == 0) cout << 1 << "\n";
        else cout << 2 << "\n";
    }
    
    return 0;
}