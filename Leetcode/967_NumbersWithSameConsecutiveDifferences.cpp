class Solution {
public:
    
    void f(string temp, int n, int k, set<int> &res) {
        if(temp.length() == n) {
            res.insert(stoll(temp));
            return;
        }    
        int num = temp.back() - '0';
        char c1 = (num + k) + '0';
        char c2 = (num - k) + '0';
        if(num + k < 10) f(temp + c1, n, k, res);
        if((num - k) >= 0) {
            f(temp + c2, n, k, res);
        }
    }
    
    vector<int> numsSameConsecDiff(int n, int k) {
        set<int> res;
        for(int i = 1; i <= 9; i++) {
            f(to_string(i), n, k, res);
        }
        return vector<int> (res.begin(), res.end());
    }
};
