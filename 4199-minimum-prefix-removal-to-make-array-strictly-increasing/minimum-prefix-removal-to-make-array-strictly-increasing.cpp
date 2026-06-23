class Solution {
public:
    int minimumPrefixLength(vector<int>& nums) {
        int n=nums.size();
        int last=0;
        for(int i=1;i<n;i++){
            if(nums[i]<=nums[i-1]){
                last=i;
            }
        }
        return last;
    }
};