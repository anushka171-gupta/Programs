class Solution {
public:
    int len(string s, int i, int j) {
        
        while(i >= 0 && j < s.size() && s[i] == s[j]) {
            i--, j++;
        }
        return j - i - 1;
    }
    string longestPalindrome(string s) {
        
        
        int m = INT_MIN, start = 0, end = 0;
        
        for(int i = 0; i < (int)s.size(); i++) {
            int a = len(s, i, i + 1);
            int b = len(s, i, i);
            int c = (a > b) ? a : b;
            if(c > m) {
                m = c;
                start = i - (c- 1) / 2;
                end = i + c/2;
            }
        }
        return s.substr(start, end - start + 1);
    }
};
