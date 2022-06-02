class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> m(nums1.size() + nums2.size());
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), m.begin());
        int mid1 = ceil((m.size()-1) / 2.0), mid2 = floor((m.size()-1) / 2.0);
        if(m.size() & 1) mid1 = mid2;
        // cout << mid1 << " " << mid2 ;
        return double((m[mid1] + m[mid2]) / 2.0);
    }
};
