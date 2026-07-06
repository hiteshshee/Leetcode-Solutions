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
        solve(idx+1,curr,candidates,target-candidates[idx]);
        curr.pop_back();
        while(idx+1<candidates.size()&&candidates[idx+1]==candidates[idx]){
            idx++;
        }
        solve(idx+1,curr,candidates,target);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> curr;
        solve(0,curr,candidates,target);
        return ans;
    }
};