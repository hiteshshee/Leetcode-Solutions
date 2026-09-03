class Solution {
public:
    bool uniformArray(vector<int>& nums1) {

        int mn = INT_MAX;
        int n = nums1.size();

        for (int i = 0; i < n; i++) {
            if (nums1[i] % 2 == 1) {
                mn = min(mn, nums1[i]);
            }
        }

        for (int i = 0; i < n; i++) {
            if (nums1[i] % 2 == 0 && mn != INT_MAX && nums1[i] < mn) {
                return false;
            }
        }

        return true;
    }
};