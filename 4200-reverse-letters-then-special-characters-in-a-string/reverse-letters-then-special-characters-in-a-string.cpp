class Solution {
public:
    string reverseByType(string s) {
        int n=s.length();
        string letters="";
        for(int i=0;i<n;i++){
            if(s[i]!='!'&&s[i]!='@'&&s[i]!='#'&&s[i]!='$'&&s[i]!='%'&&s[i]!='^'&&s[i]!='&'&&s[i]!='*'&&s[i]!='('&&s[i]!=')'){
                letters=letters+s[i];
            }
        }
        string special="";
        for(int i=0;i<n;i++){
            if(s[i]=='!'||s[i]=='@'||s[i]=='#'||s[i]=='$'||s[i]=='%'||s[i]=='^'||s[i]=='&'||s[i]=='*'||s[i]=='('||s[i]==')'){
               special=special+s[i];
            }
        }
        string ans="";
        reverse(letters.begin(), letters.end());
        reverse(special.begin(), special.end());
        int ind1=0;
        int ind2=0;
        for(int i=0;i<n;i++){
            if(s[i]!='!'&&s[i]!='@'&&s[i]!='#'&&s[i]!='$'&&s[i]!='%'&&s[i]!='^'&&s[i]!='&'&&s[i]!='*'&&s[i]!='('&&s[i]!=')'){
                ans=ans+letters[ind1];
                ind1++;
            }
            else{
                ans=ans+special[ind2];
                ind2++;
            }
        }
        return ans;
    }
};