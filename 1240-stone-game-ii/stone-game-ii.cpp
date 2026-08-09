class Solution {
public:
    int n;
    vector<vector<int>> dp;
    vector<int> suffix;

    int solve(int i,int M,vector<int>& piles) {
        if(i>=n) return 0;

        if(dp[i][M]!=-1) return dp[i][M];

        int ans=0;

        for(int X=1;X<=2*M && i+X<=n;X++) {
            ans=max(ans,suffix[i]-solve(i+X,max(M,X),piles));
        }

        return dp[i][M]=ans;
    }

    int stoneGameII(vector<int>& piles) {
        n=piles.size();

        suffix.resize(n+1,0);
        for(int i=n-1;i>=0;i--) {
            suffix[i]=suffix[i+1]+piles[i];
        }

        dp.assign(n,vector<int>(n+1,-1));

        return solve(0,1,piles);
    }
};