#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {

        int a, b, c; cin >> a >> b >> c;

        int x = (a + c) / (2 * b);
        int y = (2 * b - c) / a;
        int z = (2 * b - a) / c;

        int new_a = y * a;
        int new_b = x * b;
        int new_c = z * c;

        // cout << x << " " << y << " " << z << "\n";
        // cout << new_a << " " << new_b << " " << new_c << "\n";

        if((new_a > 0 && (b - new_a == c - b)) || 
           (new_b > 0 && (new_b - a == c - new_b)) || 
           (new_c > 0 && (b - a == new_c - b)))
            cout << "YES\n";
        else cout << "NO\n";


    }

    return 0;
}