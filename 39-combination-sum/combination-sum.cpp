class Solution {
public:
vector<vector<int>> ans;
    void solve(int idx,vector<int>& curr,vector<int>& candidates,int target){
        
        if(target==0){
            ans.push_back(curr);
            return;
        }
        if(idx==candidates.size()||target<0){
            return;
        }
        curr.push_back(candidates[idx]);
        solve(idx,curr,candidates,target-candidates[idx]);
        curr.pop_back();
        solve(idx+1,curr,candidates,target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> curr;
        solve(0,curr,candidates,target);
        return ans;
    }
};