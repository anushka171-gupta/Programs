#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        string t; cin >> t;
        
        if(t != "abc") {
            sort(s.begin(), s.end());
            cout << s << "\n";
        }
        else {
            vector<int> c(26, 0);
            for(auto &x: s) {
                c[x - 'a']++;
            }
            if(!c[0] || !c[1] || !c[2]) {
                sort(s.begin(), s.end());
                cout << s << "\n";
            }
            else {
                string res = string(c[0], 'a') + string(c[2], 'c') + string(c[1], 'b');
                for(int i = 3; i < 26; i++) {
                    res += string(c[i], i + 'a');
                }
                cout << res << "\n";
            }
            
        }
    }
    
    return 0;
}