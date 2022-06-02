class Solution {
public:
    int romanToInt(string s) {
        int num = 0, i;
        map<char, int> h = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        for(i = 0; i < s.length() - 1; i++) {
            if(h[s[i]] >= h[s[i + 1]]) num += h[s[i]];
            else {
                num += (h[s[i + 1]] - h[s[i]]);
                i++;
            }
        }
        if(i < s.length()) num += h[s[i]];
        return num;
    }
};
