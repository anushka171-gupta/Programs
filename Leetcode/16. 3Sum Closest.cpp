class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int min = INT_MAX, res = 0;
        sort(nums.begin(), nums.end());
        int n = nums.size() - 2;
        for(int i = 0; i < n; i++) {
            if(!i || (i > 0 && nums[i] != nums[i-1])) {
                int x = target - nums[i], lo = i + 1, hi = nums.size() - 1;
                while(lo < hi) {
                    int diff = abs(x - (nums[lo] + nums[hi]));
                    if(min > diff) {
                        min = diff;
                        res = nums[i] + nums[lo] + nums[hi];
                    }
                    if(nums[lo] + nums[hi] < x) lo++;
                    else hi--;
                }
            }
        }
        return res;
    }
};
