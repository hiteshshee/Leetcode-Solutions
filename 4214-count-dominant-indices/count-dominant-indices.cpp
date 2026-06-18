class Solution {
public:
    int dominantIndices(vector<int>& nums) {
       int n=nums.size();
       int count=0;
       for(int i=0;i<n;i++){
        double avg=0;
        double ni=0;
        for(int j=1;j<n-i;j++){
            avg=avg+nums[i+j];
            ni++;
        }
        if(nums[i]>(avg/ni)){
            count++;
        }
       } 
       return count;
    }
};