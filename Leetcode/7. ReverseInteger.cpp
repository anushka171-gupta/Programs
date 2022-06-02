class Solution {
public:
    int reverse(int x) {
        long int rev = 0;
        while(x) {
            rev = rev * 10 + (x % 10);
            x /= 10;
        }
        if(rev < (-2147483648) || rev > (2147483647)) return 0;
        else return rev;
    }
};
