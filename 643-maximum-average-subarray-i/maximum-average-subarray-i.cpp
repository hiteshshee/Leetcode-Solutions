class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        double avg=-99999.00000;
        int l=0;
        int r=k;
        double sum=0.0;
        
        for(int i=0;i<k;i++){
            sum=sum+nums[i];
        }
        if(k==n){
            return sum/k;
        }
        while(r<n+1){
            avg=max(sum/k,avg);
            sum=sum-nums[l];
            l++;
            sum=sum+nums[r];
            r++;
        }
        
        return avg;
    }
};