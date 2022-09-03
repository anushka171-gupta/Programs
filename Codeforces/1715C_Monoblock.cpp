#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    long long n, m; cin >> n >> m;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long awesome = n * (n + 1) / 2;
    for(int i = 1; i < n; i++) {
        if(a[i] != a[i - 1]) 
        awesome += (i * (n - i));
    }

    while(m--) {

        int i, x; cin >> i >> x;
        i--;

        if(i && a[i] != a[i - 1]) 
            awesome -= (i * (n - i));
        
        if((i + 1) < n && a[i] != a[i + 1]) 
            awesome -= (i + 1) * (n - (i + 1));
        
        a[i] = x;
        if(i && a[i] != a[i - 1])
            awesome += i * (n - i);
        
        if((i + 1) < n && a[i] != a[i + 1])
            awesome += (i + 1) * (n - (i + 1));

        cout << awesome << "\n";
    }
    
    return 0;
}