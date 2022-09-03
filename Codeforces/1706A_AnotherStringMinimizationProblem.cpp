#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {

        int n, m; cin >> n >> m;
        string s(m + 1, 'B');

        while(n--) {
            int a; cin >> a;
            if(a < (m + 1 - a)) {
                if(s[a] == 'B') s[a] = 'A';
                else s[(m + 1 - a)] = 'A';
            }
            else {
                if(s[(m + 1 - a)] == 'B') s[(m + 1 - a)] = 'A';
                else s[a] = 'A';
            }
        }

        s = s.substr(1, s.size() - 1);
        cout << s << "\n";

    }

    return 0;
}
