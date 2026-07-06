class Solution {
public:
vector<vector<int>> ans;
    void solve(vector<bool>& used,vector<int>& nums,vector<int>& curr){
        if(curr.size()==nums.size()){
            ans.push_back(curr);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(used[i]){
                continue;
            }
            used[i]=true;
            curr.push_back(nums[i]);
            solve(used,nums,curr);
            curr.pop_back();
            used[i]=false;
        }
        
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> curr;
        vector<bool> used(nums.size(),false);
        solve(used,nums,curr);
        return ans;
    }
};