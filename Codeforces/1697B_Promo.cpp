#include <bits/stdc++.h>
using namespace std;
 
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    int n, q; cin >> n >> q;
    vector<int> p(n);
    for(int i = 0; i < n; i++) 
    cin >> p[i];
 
    sort(p.begin(), p.end(), greater<int>());
 
    vector<long long> pre(n, 0);
    pre[0] = p[0];
    for(int i = 1; i < n; i++) {
        pre[i] = pre[i-1] + p[i];
    }
 
    for(int t = 0; t < q; t++) {
        int x, y; cin >> x >> y;
        int j = x - y - 1;
        if(j < 0) cout << p[x-1] << "\n";
        else cout << pre[x-1] - pre[j] << "\n";
    }
    
    return 0;
}