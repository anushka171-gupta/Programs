class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string common = "";
        for(int i = 0; i < strs[0].length(); i++) {
            bool flag = true;
            for(int j = 1; j < (int)strs.size(); j++) {
                if(strs[0][i] != strs[j][i]) { flag = false; break; }
            }
            if(!flag) break;
            common += strs[0][i];
        }
        return common;
    }
};
