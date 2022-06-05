#include <bits/stdc++.h>
using namespace std;
 
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        map<int, stack<int>> h;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            h[a[i]].push(i);
        }
        bool ans = true;
        for(auto x: h) {
            if(x.second.size() == 1) {
                ans = false;
                break;
            }
        }
        if(!ans) cout << -1 << "\n";
        else {
            vector<int> res(n);
            for(int i = 0; i < n; i++) {
                if(h[a[i]].top() != i) {
                    res[i] = h[a[i]].top();
                    h[a[i]].pop();
                }
                else {
                    int idx = h[a[i]].top();
                    h[a[i]].pop();
                    res[i] = h[a[i]].top();
                    h[a[i]].pop();
                    h[a[i]].push(idx);
                }
            }
 
            for(auto x: res) {
                cout << x + 1 << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
