#include <bits/stdc++.h>
using namespace std;

int main(void) {
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int x1, x2, y1, y2;
    cin >> x1 >> x2 >> y1 >> y2;

    int d1 = abs(x1 - y1);
    int d2 = abs(x2 - y2);

    if(d1 && d2 && d1 != d2) {
        cout << -1 << "\n";
        return 0;
    }

    int w1, w2, z1, z2;

    if(x1 == y1) {
        
    }

    return 0;
}