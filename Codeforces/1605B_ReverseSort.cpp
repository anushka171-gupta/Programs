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
            
            cout << 1 << "\n";
            cout << n << " ";
            for(int i = 1; i <= n; i++) cout << i << " ";
            cout << "\n";
        }
    }

    return 0;
}

