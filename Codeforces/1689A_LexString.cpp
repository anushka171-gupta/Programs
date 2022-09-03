#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, m, k; cin >> n >> m >> k;
        string a, b; cin >> a >> b;
        string s = "";
        if(m > n) swap(a, b);
        int x = (m - n) / k;
        int i = 0, j = 0;
        bool flag = false;
        while(i < n && j < m) {
            if(b[j] < a[i] && flag) {
                s += b[j];
                flag = false;
            }
            else {
                int y = x;
                while(i < n && y >= 0) {
                    s += a[i];
                    i++;
                }
                flag = true;
            }
            j++;
        }
        while(i < n) {
            s += a[i];
            i++;
        }
        while(j < m) {
            s += b[j];
            j++;
        }

        cout << s << "\n";
    }
    
    return 0;
}