#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        set<int> res;
        for(int i = 1; i * i <= n; i++)
            res.insert(i * i);
        for(int i = 1; i * i * i <= n; i++) 
            res.insert(i * i * i);
        cout << res.size() << "\n";
        
    }

    return 0;
}