#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> h(4e5 + 1, 0);
        vector<int> a(n);

        for(int i = 0; i < n; i++) {
            cin >> a[i];
            h[a[i]]++;
        }

        sort(a.begin(), a.end());

        int i = 0, j = n-1;
        while(i < j) {
            
        }
    }
    
    return 0;
}