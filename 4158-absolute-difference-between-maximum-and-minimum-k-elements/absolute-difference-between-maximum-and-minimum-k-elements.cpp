class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int lsum=0;
        int n=nums.size();
        for(int i=0;i<k;i++){
            lsum=lsum+nums[i];
        }
        int hsum=0;
        for(int i=n-1;i>=n-k;i--){
            hsum=hsum+nums[i];
        }
        return abs(hsum-lsum);
    }
};