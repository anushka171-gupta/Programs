class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0, size = nums.size();
        for(int j = 0; j < size; j++) {
            if(nums[j] != val) {
                nums[i++] = nums[j];
            }
        }
        return i;
    }
};
