#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        // vector<long long> res(n, 0);
        string s; cin >> s;

        unsigned long long res = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == 'L') res += i;
            else res += n-i-1;
        }
        
        stack<unsigned long long> l, r;
        unsigned long long m = n/ 2 - 1;
        for(int i = m; i >= 0; i--) {
            if(s[i] == 'L') l.push(i);
        }

        for(int i = n/2; i < n; i++) {
            if(s[i] == 'R') r.push(i);
        }

        for(int i = 1; i <= n; i++) {

            if(!l.empty() && !r.empty()) {
                long long el = (n - 1 - l.top()) - (l.top());
                long long er =  r.top() - (n - 1 - r.top());
                if(el > er) {
                    res += el;
                    l.pop();
                }
                else {
                    res += er;
                    r.pop();
                }
            }
            
            else if(!l.empty()) {
                res += (n - 1 - l.top()) - (l.top());
                l.pop();
            }
            else if(!r.empty()) {
                res += r.top() - (n - 1 - r.top());
                r.pop();
            }
            cout << res << " ";
        }

        cout << "\n";

    }
    
    return 0;
}