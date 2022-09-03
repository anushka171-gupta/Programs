#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int num = n;
        vector<int> pf;

        // cout << n << ": ";

        while(n && n % 2 == 0) {
            pf.push_back(2);
            n /= 2;
        }

        for(int i = 3; i <= sqrt(n); i++) {
            while(n && n % i == 0) {
                pf.push_back(i);
                n /= i;
            }
            // cout << i << " " << n << "\n";
        }
        if(n) pf.push_back(n);

        // for(auto &x: pf) {
        //     cout << x << " ";
        // }
        // cout << "\n";

        if(pf.size() < 3) cout << "NO\n";
        else if(pf.size() == 3) {
            if(pf[0] == pf[1] || pf[1] == pf[2] || pf[2] == pf[0]) 
                cout << "NO\n";
            else {
                cout << "YES\n";
                cout << pf[0] << " " << pf[1] << " " << pf[2] << "\n";
            }
        }
        else {
            int a = pf[0];
            int b = pf[1];
            int i = 2;
            if(b == a) {
                i = 3;
                b *= pf[2];
            }
            int c = 1;
            for( ; i < pf.size(); i++) {
                c *= pf[i];
            }

            if(c == 1) c = 0;

            if(a != b && b != c && c != a && 
            ((a * b * c) == num)) {
                cout << "YES\n";
                cout << a << " " << b << " " << c << "\n";
            }
            else cout << "NO\n";
        }
    }

    return 0;
}