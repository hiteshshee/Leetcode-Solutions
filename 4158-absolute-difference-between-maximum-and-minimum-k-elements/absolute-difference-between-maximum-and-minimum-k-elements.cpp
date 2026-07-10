class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int lsum=0;
        for(int i=0;i<k;i++){
            lsum=lsum+nums[i];
        }
        int hsum=0;
        sort(nums.rbegin(),nums.rend());
        for(int i=0;i<k;i++){
            hsum=hsum+nums[i];
        }
        return abs(hsum-lsum);
    }
};