#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        if(s.length() == 2) cout << s[1] << "\n";
        else cout << *min_element(s.begin(), s.end()) << "\n";
    }
    return 0;
}
