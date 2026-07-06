class Solution {
public:
vector<vector<int>> ans;
    void solve(int start,int n,vector<int>& curr,int k){
        if(curr.size()==k){
            ans.push_back(curr);
            return;
        }
        for(int i=start;i<=n;i++){
            curr.push_back(i);
            solve(i+1,n,curr,k);
            curr.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> curr;
        solve(1,n,curr,k);
        return ans;
    }
};