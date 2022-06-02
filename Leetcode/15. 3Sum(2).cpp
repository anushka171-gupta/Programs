class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> s;
        map<int, vector<int>> h;
        for(int i = 0; i < nums.size(); i++) {
            h[nums[i]].push_back(i);
        }
        if(h.size() == 1 && h.find(0) != h.end() && h[0].size() >= 3) {
            return vector<vector<int>> {{0,0,0}};
        }
        else if(h.size() == 3 && h[0].size() >= 1 && h[1].size() >=1 && h[-1].size() >= 1) {
            vector<vector<int>> v = {{-1,0,1}};
            if(h[0].size() >= 3) v.push_back({0,0,0});
            return v;
        }
        for(int i = 0; i < nums.size(); i++) {
            int x = -nums[i];
            for(int j = 0; j < nums.size(); j++) {
                if(h.find(x - nums[j]) != h.end()) {
                    for(auto y: h[x - nums[j]]) {
                        if(y != i && y != j && i != j) {
                            vector<int> v{nums[i], nums[j], x - nums[j]};
                            sort(v.begin(), v.end());
                            s.insert(v);
                            break;
                        }
                    }
                }
            }
        }
        vector<vector<int>> v(s.begin(), s.end());
        return v;
    }
};
