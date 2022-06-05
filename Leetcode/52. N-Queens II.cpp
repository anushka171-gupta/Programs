class Solution {
public:
    bool check(vector<string> &temp, int r, int c, int n) {
        int da[][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}, {1, 1}, {-1, -1}, {-1, 1}, {1, -1}};
        for(auto x: da) {
            int i = r + x[0];
            int j = c + x[1];
            while(i < n && j < n && i >= 0 && j >= 0) {
                if(temp[i][j] == 'Q') return false;
                i += x[0];
                j += x[1];
            }
        }
        return true;
    }
    void f(vector<string> &temp, int i, int n, int &res) {
        if(i == n) {
            res++;
            return;
        }
        for(int j = 0; j < n; j++) {
            temp[i][j] = 'Q';
            if(check(temp, i, j, n))
                f(temp, i + 1, n, res);
            temp[i][j] = '.';
        }
    }
    int totalNQueens(int n) {
        int res = 0;
        vector<string> temp(n, string (n, '.'));
        f(temp, 0, n, res);
        return res;
    }
};
