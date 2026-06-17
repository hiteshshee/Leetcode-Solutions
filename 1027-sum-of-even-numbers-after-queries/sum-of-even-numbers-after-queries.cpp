class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        int m=queries.size();
        vector<int> ans;
        for(int i=0;i<m;i++){
            
            nums[queries[i][1]]=nums[queries[i][1]]+queries[i][0];
            int sum=0;
            for(int j=0;j<n;j++){
                
                if(nums[j]%2==0){
                    sum=sum+nums[j];
                }
                
            }
            ans.push_back(sum);
        }

        return ans;
    }
};