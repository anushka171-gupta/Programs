#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<long long> a(n);
        unordered_map<int, int> idx;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            idx[a[i]] = i + 1;
        }

        sort(a.begin(), a.end());

        long long res = 0;
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                if((a[i] * a[j]) > (2 * n - 1))
                    break;
                else if((a[i] * a[j]) == (idx[a[i]] + idx[a[j]]))
                    res++;
            }
            // cout << res << "\n";
        }

        cout << res << "\n";
    }
    
    return 0;
}