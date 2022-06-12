class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int h[10001];
        memset(h, -1, sizeof(h));
        int n = nums.size();
        vector<int> pre(n, 0);
        pre[0] = nums[0];
        for(int i = 1; i < n; i++) {
            pre[i] += nums[i] + pre[i-1];
        }
        int res = 0, temp = 0;
        int idx = -1;
        for(int i = 0; i < n; i++) {
            if(h[nums[i]] != -1 && h[nums[i]] > idx) 
                idx = h[nums[i]];
            h[nums[i]] = i;
            if(idx != -1) temp = pre[i] - pre[idx];
            else temp = pre[i];
            res = max(res, temp);
        }
        return res;
    }
};
