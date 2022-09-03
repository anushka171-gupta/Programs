#include <bits/stdc++.h>
using namespace std;

int dfs(vector<vector<char>> &g, vector<vector<int>> &v, int i, int j) {
    if(!i || !j || v[i][j] || g[i][j] == '.')
        return 0;
    
    v[i][j] = 1;
    vector<vector<int>> da = {{1, 0}, {0, 1}, {-1, 0}, {0,-1}, 
    {1,1},{-1,-1}, {-1, 1}, {1, -1}};

    int res = 1;
    for(auto &x: da) {
        int r = x[0] + i;
        int c = x[1] + j;
        res += dfs(g, v, r, c);
    }

    return res;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        vector<vector<char>> g(n + 2, vector<char> (m + 2, '.'));

        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= m; j++) {
                cin >> g[i][j];
            }
        }

        vector<vector<int>> v(n + 2, vector<int> (m + 2, 0));
        string res = "YES";
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= m; j++) {
                if(!v[i][j] && g[i][j] == '*') {
                    int t = dfs(g, v, i, j);
                    // cout << i << " " << j << " " << t << "\n";
                    if(t != 3) {
                        res = "NO";
                        break;
                    }
                    else {
                        // if((g[i + 1][j + 1] == '*' && g[i-1][j-1] == '*') ||
                        //     (g[i-1][j+1] == '*' && g[i+1][j-1] == '*') || 
                        //     (g[i+1][j] == '*' && g[i-1][j] == '*') || 
                        //     (g[i][j-1] == '*' && g[i][j+1] == '*') ||
                        //     (g[i][j + 1] == '*' && g[i][j + 2] == '*') || 
                        //     (g[i + 1][j] == '*' && g[i + 2][j] == '*') || 
                        //     (g[i + 1][j + 1] == '*' && g[i + 2][j + 2] == '*')) {
                        //         res = "NO";
                        //         break;
                        //     }

                        if(!(
                            (g[i-1][j-1] == '*' && g[i][j-1] == '*') ||
                            (g[i+1][j+1] == '*' && g[i][j+1] == '*') ||
                            (g[i][j-1] == '*' && g[i+1][j-1] == '*') ||
                            (g[i][j+1] == '*' && g[i+1][j+1] == '*') ||
                            (g[i-1][j] == '*' && g[i][j-1] == '*') ||
                            (g[i-1][j] == '*' && g[i][j+1] == '*') ||
                            (g[i][j-1] == '*' && g[i+1][j] == '*') ||
                            (g[i][j+1] == '*' && g[i+1][j] == '*') ||
                            (g[i-1][j-1] == '*' && g[i-1][j] == '*') ||
                            (g[i-1][j+1] == '*' && g[i-1][j] == '*') ||
                            (g[i+1][j-1] == '*' && g[i+1][j] == '*') || 
                            (g[i+1][j+1] == '*' && g[i+1][j] == '*')
                        ))  {
                            res = "NO";
                            break;
                        }

                            // cout << (g[i + 1][j + 1] == '*' && g[i-1][j-1] == '*') << "\n";
                            // cout << (g[i-1][j+1] == '*' && g[i+1][j-1] == '*')  << "\n";
                            // cout << (g[i+1][j] == '*' && g[i-1][j] == '*') << "\n";
                            // cout << (g[i][j-1] == '*' && g[i][j+1] == '*') << "\n";
                    }
                }
            }
            if(res == "NO") break;
        }

        cout << res << "\n";
    }
    
    return 0;
}