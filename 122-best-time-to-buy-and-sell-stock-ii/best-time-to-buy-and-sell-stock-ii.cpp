class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int mini=prices[0];
        int fmax;
        int sum=0;
        int large=0;
        
        for(long long i=1;i<n;i++){
            int maxi=0;
            int fmin=INT_MAX;
            fmin=min(fmin,prices[i-1]);
            mini=min(mini,prices[i]);
            large=max(prices[i]-mini,maxi);
            maxi=max(prices[i]-fmin,maxi);
            if(maxi>0){
                sum=sum+maxi;
            }
        }
        fmax=max(large,sum);
        return fmax;
    }
};