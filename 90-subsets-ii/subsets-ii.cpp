class Solution {
public:
    vector<vector<int>> ans;
    void solve(int i,vector<int>& nums,vector<int>& curr){
        if(i>=nums.size()){
            ans.push_back(curr);
            return;
        }
        curr.push_back(nums[i]);
        solve(i+1,nums,curr);
        curr.pop_back();
        while(i+1<nums.size()&&nums[i]==nums[i+1]){
            i++;
        }
        solve(i+1,nums,curr);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> curr;
        sort(nums.begin(),nums.end());
        solve(0,nums,curr);
        return ans;
    }
};