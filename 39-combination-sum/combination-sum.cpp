class Solution {
public:
vector<vector<int>> ans;
    void solve(int idx,vector<int>& curr,vector<int>& candidates,int target){
        int sum=0;
        for(int i=0;i<curr.size();i++){
            sum+=curr[i];
        }
        if(sum==target){
            ans.push_back(curr);
            return;
        }
        if(idx==candidates.size()||sum>target){
            return;
        }
        curr.push_back(candidates[idx]);
        solve(idx,curr,candidates,target);
        curr.pop_back();
        solve(idx+1,curr,candidates,target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> curr;
        solve(0,curr,candidates,target);
        return ans;
    }
};