class Solution {
public:
    string greatestLetter(string s) {
        string ans="";
        int n=s.length();
        vector<int> freql(26,0);
        vector<int> frequ(26,0);
        int maxi=-1;
        for(int i=0;i<n;i++){
            if(islower(s[i])){
                freql[s[i]-'a']++;
            }
            if(isupper(s[i])){
                frequ[s[i]-'A']++;
            }
        }
        for(int i=25;i>=0;i--){
            if(freql[i]>0&&frequ[i]>0){
                return ans+='A'+i;
            }
        }
       
        return ans;

    }
};