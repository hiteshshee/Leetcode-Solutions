class Solution {
public:
    int minLength(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> freq;
        int l=0;
        int r=0;
        long long sum=0;
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
            if(freq[nums[i]]==1){
                sum=sum+nums[i];
            }
            while(sum>=k){
                ans=min(ans,i-l+1);
                freq[nums[l]]--;
                if(freq[nums[l]]==0){
                    sum-=nums[l];
                }
                l++;
            }
        }
        if(ans==INT_MAX){
            return -1;
        }
        return ans;
    }
};