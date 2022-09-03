#include <bits/stdc++.h>
using namespace std;

void dfs(map<int, vector<int>> &h, int e, unordered_map<int, int> &v, int d) {
    
    cout << ".."<<e << " " << d << "\n";
    v[e] = d;
    for(auto &x: h[e]) {
        if(v.find(x) == v.end()) 
        dfs(h, x, v, d);
    }
    
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int k; cin >> k;
        
        int a, b;
        map<int, vector<int>> h;
        
        for(int i = 0; i < k; i++) {
            cin >> a >> b;
            h[a].push_back(b);
            h[b].push_back(a);
        }
        
        unordered_map<int, int> v;
        int d = 1;
        map<int, vector<int>> head;
        
        for(int i = 1; i <= n; i++) {
            if(v.find(i) == v.end()) {
                dfs(h, i, v, d);
                d++;
            }
            if((head.find(v[i]) == head.end() 
            || h[i].size() > head[v[i]][0])) {
                head[v[i]] = {(int) (h[i].size()), i};
            }

            
        }
        
        cout << d - 1 << "\n";
        for(int i = 1; i <= n; i++) {
            cout << v[i] << " ";
        }
        
        for(int i = 1; i < d; i++) {
            cout << head[i][1] << " ";
        }
        
        cout << "\n";
    }
    
    return 0;
}