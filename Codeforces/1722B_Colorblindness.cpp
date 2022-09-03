#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string a, b; cin >> a >> b;
        string res = "YES\n";
       for(int i = 0; i < n; i++) {
            if(a[i] != b[i]) {
                if((a[i] == 'R' && b[i] != 'R') || (b[i] == 'R' && a[i] != 'R'))
                    res = "NO\n";
            }
       }

       cout << res ;
    }
    
    return 0;
}