class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        while(i < s.length() && s[i] == ' ') i++;
        if(i == s.length()) return 0;
        int neg = 1;
        if(s[i] == '-') neg = -1;
        if(s[i] == '-' || s[i] == '+') i++;
        long long n = 0;
        long long lim = 1 << 31;
        lim *= -1;
        while(i < s.length() && s[i] >= '0' && s[i] <= '9') {
            n = n * 10 + (s[i] - '0');
            if(n > lim) break;
            i++;
        }
        if(n > lim && (neg == -1))  n = lim;
        else if(n > (lim - 1) && (neg == 1)) n = lim - 1;
        if(neg == -1) n *= neg;
        return n;
    }
};
