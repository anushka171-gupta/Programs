#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {

        long long w, h; cin >> w >> h;

        int kx1; cin >> kx1;
        vector<int> x0(kx1);
        for(int i = 0; i < kx1; i++) {
            cin >> x0[i];
        }
        
        int kx2; cin >> kx2;
        vector<int> xh(kx2);
        for(int i = 0; i < kx2; i++) {
            cin >> xh[i];
        }

        int ky1; cin >> ky1;
        vector<int> y0(ky1);
        for(int i = 0; i < ky1; i++) {
            cin >> y0[i];
        }

        int ky2; cin >> ky2;
        vector<int> yw(ky2);
        for(int i = 0; i < ky2; i++) {
            cin >> yw[i];
        }

        sort(x0.begin(), x0.end());
        sort(xh.begin(), xh.end());
        sort(y0.begin(), y0.end());
        sort(yw.begin(), yw.end());

        long long a1 = (x0[kx1 - 1] - x0[0]) * h;
        long long a2 = (xh[kx2 - 1] - xh[0]) * h;

        long long a3 = (y0[ky1 - 1] - y0[0]) * w;
        long long a4 = (yw[ky2 - 1] - yw[0]) * w;

        cout << max(a1, max(a2, max(a3, a4))) << "\n";

    }
    return 0;
}