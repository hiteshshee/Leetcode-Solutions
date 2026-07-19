class Solution {
public:
    string longestNiceSubstring(string s) {
        int n=s.length();
        string ans="";
        for(int i=0;i<n;i++){
            vector<bool> lower(26,false);
            vector<bool> upper(26,false);
            for(int j=i;j<n;j++){
                if(islower(s[j])){
                    lower[s[j]-'a']=true;
                }
                else{
                    upper[s[j]-'A']=true;
                }
                bool ok=true;
                for(int k=0;k<26;k++){
                    if(lower[k]!=upper[k]&&(lower[k]||upper[k])){
                        ok=false;
                        break;
                    }
                }
                if(ok&&j-i+1>ans.length()){
                    ans=s.substr(i,j-i+1);
                }
            }
        }
        return ans;
    }
};