#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {

        int n; cin >> n;
        string s;  cin >> s;

        if(is_sorted(s.begin(), s.end())) cout << 0 << "\n";

        else {
            
            int ones = 0;
            for(int i = 0; i < n; i++) {
                if(s[i] == '1') ones++;
            }
            set<int> res;
            int i;
            int len = n - ones;
            for(i = n-1; ones > 0 && i >= len; i--) {
                if(s[i] == '1') ones--;
                else res.insert(i + 1);
            }
            
            for(; i >= 0; i--) {
                if(s[i] == '1') res.insert(i + 1);
            }

            cout << 1 << "\n" << res.size() << " ";
            for(auto &x: res) cout << x << " ";
            cout << "\n";
        }
    }

    return 0;
}

