class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        int n = nums.size() - 2;
        for(int i = 0; i < n; i++) {
            if(!i || (i > 0 && nums[i] != nums[i-1])) {
                int x = -nums[i], lo = i + 1, hi = nums.size() - 1;
                while(lo < hi) {
                    if((nums[lo] + nums[hi]) == x) {
                        res.push_back({nums[i], nums[lo], nums[hi]});
                        while(lo < hi && nums[lo] == nums[lo + 1]) lo++;
                        while(lo < hi && nums[hi] == nums[hi - 1]) hi--;
                        lo++;
                        hi--;
                    }
                    else if((nums[lo] + nums[hi]) < x) lo++;
                    else hi--;
                }
            }
        }
        return res;
    }
};
