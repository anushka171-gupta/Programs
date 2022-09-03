#include <bits/stdc++.h>
using namespace std;

long long solve(int n, int x) {
    
    if(n == 0) return 0;
    if(n >= x) 
        return solve(n - x, x - 1) * 10 + x;
    else return n;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        cout << solve(n, 9) << "\n";
    }
    
    return 0;
}