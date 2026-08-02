class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        int n=nums.size();
        long long strength=0;
        
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                long long prod=1LL*nums[i]*nums[j];
                long long g=gcd(nums[i], nums[j]);
                if(((prod) / (g*g))>strength) {
                    strength=(prod) / (g*g);
                }
            }
        }
    return strength;
    }
};