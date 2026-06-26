class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            vector<int> sub;
            int tcount=0;
            for(int j=i;j<n;j++){
                sub.push_back(nums[j]);
                if(nums[j]==target){
                    tcount++;
                }
                if(tcount>sub.size()/2){
                    count++;
                }
            }
            
        }
        return count;
    }
};