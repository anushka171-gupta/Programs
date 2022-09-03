#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;

        vector<int> a(n);
        set<int> s;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            s.insert(a[i]);
        }

        stack<int> st;
        for(auto &x: s) {
            for(int i= 0; i < n; i++) {
                
            }
        }
    }
    
    return 0;
}