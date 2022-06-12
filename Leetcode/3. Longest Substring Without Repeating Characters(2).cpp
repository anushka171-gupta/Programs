class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> h;
        int res = 0, temp = 0, n = s.length();
        int idx = -1;
        for(int i = 0; i < n; i++) {
            if(h.find(s[i]) != h.end() && h[s[i]] > idx) 
                idx = h[s[i]];
            h[s[i]] = i;
            temp = i - idx;
            res = max(res, temp);
        }
        return res;
    }
};
