class Solution {
public:
    int f(string s1, string s2, int i, int j, vector<vector<int>> &h) {
        if(i >= s1.length()) return s2.length() - j;
        else if(j >= s2.length()) return s1.length() - i;
        if(h[i][j] != -1) return h[i][j];
        if(s1[i] == s2[j])
            return h[i][j] = f(s1, s2, i + 1, j + 1, h);
        return h[i][j] = 1 + min(f(s1, s2, i + 1, j, h), min(f(s1, s2, i, j + 1, h), f(s1, s2, i + 1, j + 1, h))); 
    }
    int minDistance(string word1, string word2) {
        int n = word1.length(), m = word2.length();
        vector<vector<int>> h(n, vector<int> (m, -1));
        return f(word1, word2, 0, 0, h);
    }
};
