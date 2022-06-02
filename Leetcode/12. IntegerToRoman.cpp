class Solution {
public:
    string s[10] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    string f(int num) {
        // cout << num << " ";
        if(num <= 0) return "";
        int n = to_string(num).length();
        if(n == 1) return s[num];
        if(n == 2) {
            if(num >= 90) return "XC" + f(num - 90);
            else if(num >= 50) return "L" + f(num - 50);
            else if(num >= 40) return "XL" + f(num - 40);
            else return "X" + f(num - 10);
        }
        else if(n == 3) {
            if(num >= 900) return "CM" + f(num - 900);
            else if(num >= 500) return "D" + f(num - 500);
            else if(num >= 400) return "CD" + f(num - 400);
            else return "C" + f(num - 100);
        }
        else
            return "M" + f(num - 1000);
    }
    string intToRoman(int num) {
        // cout << "\n";
        return f(num);
    }
};
