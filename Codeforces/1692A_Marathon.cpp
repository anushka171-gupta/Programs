#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int res = 0;
        if(b > a) res++;
        if(c > a) res++;
        if(d > a) res++;
        cout << res << "\n";
    }
    
    return 0;
}