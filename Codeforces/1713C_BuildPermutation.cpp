#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &res, int n) {
    int half = ceil((n + 1) / 2.0);
    int sq = n+1;
    for(long long i = half; i > 0; i--) {
        if(i * i < n) break; 
        sq = i * i;
    }

    int c = sq - (n), i;
    for(i = n; c <= n && i >= 0; i--) {
        if(i + c == sq) res[i] = c;
        else break;
        c++;
    }
    if(i == 2) {
        res[0] = 1;
        res[1] = 0;
        res[2] = 2;
        i = 0;
    }
    else if(i == 1) {
        res[0] = 1;
        res[1] = 0;
        i = 0;
    }
    else if(i == 0) {
        res[0] = 0;
    }
    return i;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        
        vector<int> res(n);
        int temp = solve(res, n-1);
        // cout << temp << " \n";
        while(temp > 0) {
            int x = solve(res, temp );
            if(x == temp || x == 0) break;
            temp = x;
            // cout << temp << " ";
        }

        for(int i = 0; i < n; i++) {
            cout << res[i] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}