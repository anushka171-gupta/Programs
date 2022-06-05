class Solution {
public:
    
    vector<vector<string>> s = {{}, {}, {"a","b","c"}, {"d","e","f"}, {"g","h","i"}, {"j","k","l"}, {"m","n","o"}, {"p","q","r","s"}, {"t","u","v"}, {"w","x","y","z"}};
    
    vector<string> f(string d, int i) {
        if(d.size() == 0) return s[i];
        if(i == d.size() - 1) return s[d[i] - '0'];
        vector<string> temp = f(d, i + 1);
        vector<string> res;
        for(int j = 0; j < s[d[i] - '0'].size(); j++) {
            for(int k = 0; k < temp.size(); k++) {
                res.push_back(s[d[i] - '0'][j] + temp[k]);
            }
        }
        return res;
    }
    vector<string> letterCombinations(string digits) {
        return f(digits, 0);
    }
};
