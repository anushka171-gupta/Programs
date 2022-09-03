#include <bits/stdc++.h>
using namespace std;



int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int min ; cin >> min;
        int hr = min / 60;
        int m = min % 60;
        
        vector<int> t1(2), t2(2);
        t1[0] = stoll(s.substr(0, 2));
        t1[1] = stoll(s.substr(3, 2));

        t2 = t1;


        int res = 0;
        map<vector<int>, bool> c;

        while(true) {
            t2[0] += hr;
            t2[1] += m;
            t2[0] += t2[1] / 60;

            t2[1] = t2[0] % 60;

            if(t2[0] > 24) t2[0] %= 24;
            else if(t2[0] == 24) {
                if(t2[1] > 0) t2[0] %= 24;
            }
            string h = to_string(t2[0]), mi = to_string(t2[1]);
            reverse(mi.begin(), mi.end());
            int d = stoll(mi);
            if(d > 60) continue;
            if(h == mi) {
                res++;
            }

            cout << t2[0] << ":" << t2[1] << "\n";
            if(c.find(t2) != c.end()) break;
            c[t2] = true;
        }

        cout << "\n";

        cout << res << "\n";

    }
    
    return 0;
}