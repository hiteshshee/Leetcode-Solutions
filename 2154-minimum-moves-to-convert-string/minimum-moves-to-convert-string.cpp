class Solution {
public:
    int minimumMoves(string s) {
        int n=s.length();
        int ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='X'){
                i=i+2;
                ans++;
            }
        }
        return ans;
    }
};