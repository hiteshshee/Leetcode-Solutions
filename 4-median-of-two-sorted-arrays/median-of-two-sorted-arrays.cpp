// class Solution {
// public:
//     double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//         int m=nums1.size();
//         int n=nums2.size();
//         vector<double> merged;
//         for(int i=0;i<m;i++){
//             merged.push_back(nums1[i]);
//         }
//         for(int i=0;i<n;i++){
//             merged.push_back(nums2[i]);
//         }
//         sort(merged.begin(),merged.end());
//         if((m+n)%2==1){
//             return merged[(m+n)/2];
//         }
//         double avg=(merged[(m+n)/2]+merged[(m+n)/2-1])/2;
//         return avg;
//     }
// };
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        int m = nums1.size();
        int n = nums2.size();

        if (m > n)
            return findMedianSortedArrays(nums2, nums1);

        int low = 0;
        int high = m;

        while (low <= high) {

            int cut1 = low + (high - low) / 2;
            int cut2 = (m + n + 1) / 2 - cut1;

            int l1 = (cut1 == 0) ? INT_MIN : nums1[cut1 - 1];
            int l2 = (cut2 == 0) ? INT_MIN : nums2[cut2 - 1];

            int r1 = (cut1 == m) ? INT_MAX : nums1[cut1];
            int r2 = (cut2 == n) ? INT_MAX : nums2[cut2];

            if (l1 <= r2 && l2 <= r1) {

                if ((m + n) % 2 == 1)
                    return max(l1, l2);

                return (max(l1, l2) + min(r1, r2)) / 2.0;
            }

            else if (l1 > r2) {
                high = cut1 - 1;
            }

            else {
                low = cut1 + 1;
            }
        }

        return 0;
    }
};