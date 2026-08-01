class Solution {
public:
    long long removeZeros(long long n) {
        string s=to_string(n);
        int x=s.length();
        long long ans=0;
        for(int i=0;i<x;i++){
            if(s[i]!='0'){
                ans=ans*10 + (s[i]-'0');
            }
        }
        return ans;
    }
};