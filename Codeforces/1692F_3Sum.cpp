#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        long long sum = 0;
        sort(a.begin(), a.end());
        bool res = false;
        for(long long k = 0; k < n; k++) {
            int i = k + 1, j = n-1;
            while(i < j) {
                sum = a[i] + a[j] + a[k];
                if((sum) % 10 == 3) {
                    res  = true;
                    break;
                }
                else if(sum < )
            }
            if(res) break;
        }
        if(res) cout << 
    }
    
    return 0;
}