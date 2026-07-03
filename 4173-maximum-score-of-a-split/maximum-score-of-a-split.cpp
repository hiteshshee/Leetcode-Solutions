class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        int n=nums.size();
        vector<long long> prefixsum;
        long long sum=0;
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
            prefixsum.push_back(sum);
        }
        vector<long long> suffixmin(n);
        suffixmin[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            suffixmin[i]=min((long long)nums[i],suffixmin[i+1]);
        }
        long long score=INT_MIN;
        for(int i=0;i<n-1;i++){
            score=max(score,prefixsum[i]-suffixmin[i+1]);
        }
        return score;
    }
};