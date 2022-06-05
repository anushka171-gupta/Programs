class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto x: s) {
            if(x == '(' || x == '{' || x == '[') st.push(x);
            else {
                if(st.empty()) return false;
                auto temp = (st.top());
                if(!((x == ')' && temp == '(') || (x == '}' && temp == '{') || (x == ']' && temp == '['))) return false;
                st.pop();
                
            }
        }
        if(st.empty()) return true;
        else return false;
    }
    
};
