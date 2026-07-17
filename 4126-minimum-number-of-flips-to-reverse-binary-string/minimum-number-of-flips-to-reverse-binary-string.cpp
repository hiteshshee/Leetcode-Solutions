class Solution {
public:
    int minimumFlips(int n) {
        string s="";
        int flips=0;
        while(n>0){
            s.push_back((n%2)+'0');
            n=n/2;
        }
        string rev=s;
        reverse(rev.begin(),rev.end());
        if(rev==s){
            return 0;
        }
        for(int i=0;i<s.length();i++){
            if(rev[i]!=s[i]){
                flips++;
            }
        }
        return flips;
    }
};