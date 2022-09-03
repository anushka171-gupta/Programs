#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {

        unsigned long long n, k, b, s;
        cin >> n >> k >> b >> s;

        unsigned long long a = (b + 1) * k - 1;
        unsigned long long sum = 0, ek = 0;
        if(s / k == b) a = s;
        unsigned long long c = s - a;
        vector<unsigned long long> res;
        res.push_back(a);

        sum = a;
        ek = a / k;

        // cout << a << " " << c << "\n";
        for(int i = 1; i < n; i++) {
            if(c >= k) {
                res.push_back(k - 1);
                c -= (k-1);
            }
            else {
                res.push_back(c);
                c = 0;
            }
            sum += res[i];
            ek += (res[i] / k);
        }

        if(sum != s || ek != b) {
            cout << -1 << "\n";
            continue;
        }
        for(int i = n-1; i >= 0; i--) {
            cout << res[i] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}