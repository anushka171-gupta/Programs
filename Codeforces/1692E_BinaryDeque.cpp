#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, s; cin >> n >> s;
        vector<int> a(n);
        int one = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] == 1) one++;
        }
        if(one < s) {
            cout << -1 << "\n";
            continue;
        }
        else if(one == s) {
            cout << 0 << "\n";
            continue;
        }
        int rem = one - s;
        int i = 0, j = n-1;
        vector<int> l(n), r(n);
        int b = 0;
        l[0] = INT_MAX;
        for(int i = 1; i < n; i++) {
            if(a[i] == 1) b = 0;
            l[i] = b;
            b++;
        }
        r[n-1] = INT_MAX;
        b = 0;
        for(int j = n-2; j >= 0; j--) {
            if(a[j] == 1) b = 0;
            r[j] = b;
            b++;
        }
        int res = 0;
        while(i <= j && rem > 0) {
            if(a[i] == 1) {
                i++;
                rem--;
            }
            else if(a[j] == 1) {
                j--;
                rem--;
            }
            else {
                if(l[j] < r[i]) j--;
                else i++;
            }
            res++;
            // cout << i << " " << j << " " << rem << " " << res << "\n";
        }

        cout << res << "\n";

    }
    
    return 0;
}