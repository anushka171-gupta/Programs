#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a;
        set<int> s;
        for(int i = 0; i < n; i++) {
            cin >> a;
            s.insert(a);
        }
        int l = n - s.size();
        int res = s.size();
        if(l % 2) res--;
        cout << res<< "\n";
    }
    
    return 0;
}