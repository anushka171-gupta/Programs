#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    if(a % b == 0) return b;
    return gcd(b, a % b);
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        long long a, b, c;

        long long rem = 0;
        for(int i = 1; i <= n / 2; i++) {
            if(n % i == 0) {
                c = i;
                rem = (n / c) - 1;
                if(rem & 1) {
                    a = rem / 2;
                    b = rem / 2 + 1;
                }
                else {
                    a = rem / 2 - 2;
                    b = rem / 2 + 2;
                }

                a *= c;
                b *= c;
                if(a > 0 && b > 0 && (a + b + c) == n &&
                a != c && c != b && a != b && gcd(a, b) == c) {
                    cout << a << " " << b <<  " " << c << " " << gcd(a, b) << "\n";
                    break;
                }
            }
        }

        cout << a << " " << b << " " << c << "\n";
    }
    return 0;
}