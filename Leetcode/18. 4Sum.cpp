class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if(nums.size() < 4) return vector<vector<int>> {};
        sort(nums.begin(), nums.end());
        int sum = 0;
        vector<vector<int>> res;
        for(int i = 0; i <= nums.size() - 3; i++) {
            for(int j = i + 1; j <= nums.size() - 2; j++) {
                sum = target - (nums[i] + nums[j]);
                int lo = j + 1, hi = nums.size() - 1;
                while(lo < hi) {
                    if((nums[lo] + nums[hi]) == sum) {
                        res.push_back({nums[i], nums[j], nums[lo], nums[hi]});
                        while(lo < hi && nums[lo] == nums[lo + 1]) lo++;
                        while(lo < hi && nums[hi] == nums[hi - 1]) hi--;
                        lo++;
                        hi--;
                    }
                    else if((nums[lo] + nums[hi]) < sum) lo++;
                    else hi--;
                }
                while(j < (nums.size() - 2) && nums[j] == nums[j+1]) j++;
            }
            while(i < (nums.size() - 3) && nums[i] == nums[i+1]) i++;
        }
        return res;
    }
};
