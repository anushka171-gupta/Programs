#include <bits/stdc++.h>
using namespace std;

int f1(vector<int> &a, int target) {
    int l = 0, h = a.size() - 1, best = 0;
    while(l <= h) {
        int m = l + (h - l) / 2;
        if(a[m] <= target) {
            best = m;
            l = m + 1;
        }
        else h = m - 1;
    }
    return best;
}

int f2(vector<int> &a, int target) {
    int l = 0, h = a.size() - 1, best = 0;
    while(l <= h) {
        int m = l + (h - l) / 2;
        if(a[m] >= target) {
            best = m;
            h = m - 1;
        }
        else l = m + 1;
    }
    return best;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<int> dmin, dmax;

        for(int i = 0; i < n; i++) {
            cin >> b[i];
        }

        for(int i = 0; i < n; i++) {
            int l = f1(b, a[i]);
            int g = f2(b, a[i]);
            int d = 1e9;
            if(l == -1) l = 0;
            if(g == -1) g = n-1;
            d = min(abs(a[i] - b[l]), abs(b[g] - a[l]));
            dmin.push_back(d);
            l = abs(b[0] - a[i]);
            g = abs(b[n-1] - a[i]);
            dmax.push_back(max(l, g));
        }

        for(int i = 0; i < n; i++) {
            cout << dmin[i] << " ";
        }
        cout << "\n";
        for(int i = 0; i < n; i++) {
            cout << dmax[i] << " ";
        }
        cout << "\n";

    }
    
    return 0;
}