#include <bits/stdc++.h>
using namespace std;

long long solve(long long x, long long y, long long n) {
    if(y == 0) return 1;
    long long res = solve(x, y / 2, n) % n;
    if(y & 1) return (((res * res) % n) * x) % n;
    return (res * res) % n;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long int x, y, n; 
    while(cin >> x >> y >> n) {
        cout << solve(x, y, n) << "\n";
    }
    return 0;
}
