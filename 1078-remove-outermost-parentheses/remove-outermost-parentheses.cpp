class Solution {
public:
    string removeOuterParentheses(string s) {
        int n=s.length();
        string ans="";
        int depth=0;
        for(int i=0;i<n;i++){
            char ch=s[i];
            if(ch=='('){
                if(depth>0){
                    ans=ans+'(';
                }
                depth++;
            }
            else{
                depth--;
                if(depth>0){
                    ans=ans+')';
                }
            }
        }
        return ans;

    }
};