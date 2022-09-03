#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {

        int n, k; cin >> n >> k;
        vector<int> a(n);

        long long mini = 0, sum = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }

        if(sum <= k) cout << 0 << "\n";
        else {
            int steps = 0;
            sort(a.begin(), a.end());
            mini = a[0];
            for(int i = n-1; sum > k && i > 0 && a[i] != mini; i--) {
                sum -= (a[i] - mini);
                a[i] = mini;
                steps++;
            }
            if(sum <= k) cout << steps << "\n";
            else {
                steps += (sum - k);
                cout << steps << "\n";
            }
        }

    }

    return 0;
}