#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        map<string, int> h;
        vector<vector<string>> s(3);
        for(int i = 0; i < 3; i++) {
            string temp;
            for(int j = 0; j < n; j++) {
                cin >> temp;
                s[i].push_back(temp);
                h[temp]++;
            }
        }

        vector<int> res(3,0);
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < n; j++) {
                if(h[s[i][j]] == 1) res[i] += 3;
                else if(h[s[i][j]] == 2) res[i] += 1;
            }
        }

        cout << res[0] << " " << res[1] << " " << res[2] << "\n";
    }
    
    return 0;
}