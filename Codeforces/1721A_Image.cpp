#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        string s1, s2; cin >> s1 >> s2;
        char a = s1[0], b = s1[1], c = s2[0], d = s2[1];

        if(a == b && b == c && c == d) cout << 0 << "\n";
        else if((a == b && b == c) || (a == c && c == d) ||
         (a == d && d == b) || (b == c && c == d))
        cout << 1 << "\n";
        else if((a == b && c == d) || (a == c && b == d) ||
        (a == d && b == c)) cout << 1 << "\n";
        else if((a == b) || (b == c) || (c == d) || (d == a) ||
        (a == c) || (b == d)) cout << 2 << "\n";
        else cout << 3 << "\n";
    }
    
    return 0;
}