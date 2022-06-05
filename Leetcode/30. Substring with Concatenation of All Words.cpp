class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        unordered_map<string, int> p;
        for(auto x: words) {
           p[x]++;
        }
        int n = words[0].size();
        vector<int> res;
        if(n * words.size() > s.length()) return res;
        // return res;
        if(p.size() == 1) {
            int c = 0;
            for(int i = 0; i <= s.length() - n; i++) {
                if(s.substr(i, n) == words[0]) c++;
                else break;
            }
            if(c == p[words[0]]) return {0};
        }
        
        for(int i = 0; i <= (s.length() - n); i++) {
            unordered_map<string, int> h;
            if(s.size() - i < n) break;
            if(p.find(s.substr(i, n)) != p.end()) {
                h[s.substr(i, n)]++;
                int idx = i;
                for(int j = i + n; h.size() < words.size() && j < s.length(); j += n) {
                    if(s.size() - j < n) break;
                    string temp = s.substr(j, n);
                    if(p.find(temp) != p.end() && p[temp] > h[temp]) {
                        h[temp]++;
                    }
                    else break;
                }
                if(h == p) res.push_back(idx);
            }
        }
        return res;
    }
};
