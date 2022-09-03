#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin >> t;
    while(t--) {
        
        string s; cin >> s;
        int n = s.length();
        int l = 0;
        int len = -1;
        
        
        for(int i = 1; i < n - 1; i++) {
            if(s[i] != s[0] && s[i] != s[n-1]) {
                l++;
                len = max(len, l);
            }
            else {
                l = 0;
            }
            
        }
        
        cout << len << "\n";
    }
    
    return 0;
}
