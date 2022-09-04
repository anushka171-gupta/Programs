#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n + 1, 2);
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        int height = 1;

        for(int i = 1; i <= n; i++) {
            if(a[i] == a[i-1]) {
                if(a[i] == 1) height += 5;
                else {
                    height = -1;
                    break;
                }
            }
            else if(a[i] == 1) height++;
        }

        cout << height << "\n";
    }

    return 0;
}
