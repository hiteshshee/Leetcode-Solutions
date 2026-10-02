class Solution {
public:
    void helper(int oprem,int clrem,string s,vector<string>& ans){
        if(oprem==0&&clrem==0){
            ans.push_back(s);
            return;
        }
        
        if(oprem>0){
            string curr=s+"(";
            helper(oprem-1,clrem,curr,ans);
        }
        if(oprem<clrem){
            string curr=s+")";
            helper(oprem,clrem-1,curr,ans);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s="";
        helper(n,n,s,ans);
        return ans;
    }
};