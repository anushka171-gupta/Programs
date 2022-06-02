class Solution {
public:
    int maxArea(vector<int>& height) {
        int res = 0, a = 0;
        int i = 0, j = height.size() - 1;
        while(i < j) {
            a = min(height[i], height[j]) * (j - i);
            res = max(res, a);
            if(height[i] < height[j]) i++;
            else j--;
        }
        return res;
    }
};
