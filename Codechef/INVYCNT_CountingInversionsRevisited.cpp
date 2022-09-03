#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin >> t;
    while(t--) {
        
        unsigned long long n, k; cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        unsigned long long res = 0;
        for(int i = 0; i < n; i++) {
            
            unsigned long long less = 0;
            
            for(int j = i + 1; j < n; j++) {
                if(a[j] < a[i]) less++;
            }
            
            res += less * (k * (k + 1)) / 2;
            
            less = 0;
            for(int j = i-1; j >= 0; j--) {
                if(a[j] < a[i]) less++;
            }
            
            res += less * (k * (k-1)) / 2;
        }
        
        cout << res << "\n";
    }
    
    return 0;
}