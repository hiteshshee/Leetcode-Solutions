//need revisit
class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        const int M=2048;
        vector<vector<int>> dp(4,vector<int>(M,0));
        dp[0][0]=1;
        for(int v:nums){
            for(int c=2;c>=0;c--){
                for(int x=0;x<M;x++){
                    if(dp[c][x]) dp[c+1][x^v]=1;
                }
            }
        }
        vector<int> ans(M,0);
        for(int v:nums) ans[v]=1;
        for(int x=0;x<M;x++){
            if(dp[3][x]) ans[x]=1;
        }
        int cnt=0;
        for(int x=0;x<M;x++){
            if(ans[x]) cnt++;
        }
        return cnt;
    }
};