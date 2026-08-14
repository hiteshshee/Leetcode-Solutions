class Solution {
public:
    string toLowerCase(string s) {
        string ans="";
        for(int i=0;i<s.length();i++){
            char c=tolower(s[i]);
            ans=ans+c;
        }
        return ans;
    }
};