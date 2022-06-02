class Solution {
public:
    bool dfs(int i, int j, string s, string p, map<pair<int, int>, bool>& h) {
        if(h.find({i, j}) != h.end()) return h[{i, j}];
        if(i >= s.length() && j >= p.length()) 
            return true;
        if(j >= p.length())
            return false;
        bool match = (i < s.length() && (s[i] == p[j] || p[j] == '.'));
        if((j + 1) < p.length() && p[j + 1] == '*')
            return h[{i, j}] = dfs(i, j + 2, s, p, h) || (match && dfs(i + 1, j, s, p, h));
        if(match)
            return h[{i, j}] = dfs(i + 1, j + 1, s, p, h);
        return h[{i, j}] = false;
    }
    bool isMatch(string s, string p) {
        map<pair<int, int>, bool> h;
        return dfs(0, 0, s, p, h);
    }
};
