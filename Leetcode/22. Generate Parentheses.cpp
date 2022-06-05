class Solution {
public:
    void backtrack(int l, int r, vector<string>& res, string &s) {
        if(l == 0 && r == 0) {
            res.push_back(s);
            return;
        }
        if(l == r) {
            s += '(';
            backtrack(l-1, r, res, s);
            s.pop_back();
        }
        else if(l && l < r) {
            s += '(';
            backtrack(l-1, r, res, s);
            s.pop_back();
            s += ')';
            backtrack(l, r-1, res, s);
            s.pop_back();
        }
        else if(l == 0) {
            s += ')';
            backtrack(l, r-1, res, s);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string s;
        backtrack(n, n, res, s);
        return res;
    }
};
