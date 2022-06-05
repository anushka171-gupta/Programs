class Solution {
public:
    void f(string  &temp, int n, int k, int &c, string &res, int h[]) {
        if(temp.length() == n) {
            c++;
            if(c == k) res = temp;
            return;
        }
        for(int i = 1; i <= n; i++) {
            if(h[i] == 0) {
                h[i] = 1;
                temp.push_back(i + '0');
                f(temp, n, k, c, res, h);
                temp.pop_back();
                if(c == k) return;
                h[i] = 0;
            }
        }
    }
    string getPermutation(int n, int k) {
        int h[10] = {0};
        string res, temp = "";
        int c = 0;
        f(temp, n, k, c, res, h);
        return res;
    }
};
