class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;
        vector<string> temp(numRows, "");
        int c = -1, r = 0;
        for(auto x: s) {
            temp[r] += x;
            if(r == 0 || r == numRows - 1) c *= -1;
            r += c;
            // cout << r << " ";
        }
        // cout << temp[0] << temp[1];
        string res;
        for(auto x: temp) res += x;
        return res;
    }
};
