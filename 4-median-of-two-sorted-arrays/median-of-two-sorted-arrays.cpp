class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        vector<double> merged;
        for(int i=0;i<m;i++){
            merged.push_back(nums1[i]);
        }
        for(int i=0;i<n;i++){
            merged.push_back(nums2[i]);
        }
        sort(merged.begin(),merged.end());
        if((m+n)%2==1){
            return merged[(m+n)/2];
        }
        double avg=(merged[(m+n)/2]+merged[(m+n)/2-1])/2;
        return avg;
    }
};