class Solution {
public:
    int maxArea(vector<int>& height) {
        int max = INT_MIN;
        for(int i = 0, j = height.size() - 1; i < j; ){
            max = (max > (min(height[i], height[j]) * (j - i)) ? max : min(height[i], height[j]) * (j - i));
            height[i] < height[j] ? i++ : j--;
        }
        return max;
    }
};
