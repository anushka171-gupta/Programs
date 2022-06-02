class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> h;
        int len = 0, max = INT_MIN;
        for(int i = 0; i < s.length(); i++) {
            if(h.find(s[i]) == h.end()) {
                len++;
                h[s[i]] = i;
            }
            else {
                max = (max > len) ? max : len;
                len = ((len + 1) < (i - h[s[i]]) ? len + 1 : (i- h[s[i]]));
                h[s[i]] = i;
            }
            // cout << s[i] << " " << max << " " << len << "\n";
        }
        max = (max > len) ? max : len;
        return max;
    }
};
