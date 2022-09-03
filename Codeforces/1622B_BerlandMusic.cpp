#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> p(n);
        for(int i = 0; i < n; i++) {
            cin >> p[i];
        }

        string s; cin >> s;

        vector<vector<int>> temp(s.length(), vector<int> (3));
        for(int i = 0; i < s.length(); i++) {
            temp[i] = {s[i] - '0', p[i], i};
        }

        sort(temp.begin(), temp.end(), [] (vector<int> &a, vector<int> &b) {
            if(a[0] == b[0]) {
                return a[1] > b[1];
            }
            else {
                return a[0] > b[0];
            }
        });

        int k = s.length();
        for(int i = 0; i < s.length(); i++, k--) {
            p[temp[i][2]] = k; 
        }

        for(auto &x: p) cout << x << " ";
        cout << "\n";
    }

    return 0;
}