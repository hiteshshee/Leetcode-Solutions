class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        vector<int> prefixgcd(n);
        int mx=0;
        for(int i=0;i<n;i++){
            mx=max(mx,nums[i]);
            prefixgcd[i]=gcd(nums[i],mx);
        }
        long long sum=0;
        sort(prefixgcd.begin(),prefixgcd.end());
        for(int i=0;i<n/2;i++){
            sum=sum+gcd(prefixgcd[i],prefixgcd[n-i-1]);
            
        }
        return sum;
    }
};