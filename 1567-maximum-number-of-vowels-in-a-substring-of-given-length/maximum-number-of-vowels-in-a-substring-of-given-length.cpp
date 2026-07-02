class Solution {
public:
    int maxVowels(string s, int k) {
        int n=s.length();
        int count=0;
        int ans=0;
        for(int i=0;i<k;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                count++;
            }
        }
        ans=max(ans,count);
        int l=0;
        int r=k;
        while(r<n){
            if(s[l]=='a'||s[l]=='e'||s[l]=='i'||s[l]=='o'||s[l]=='u'){
                count--;
                l++;
            }
            else{
                l++;
            }
            if(s[r]=='a'||s[r]=='e'||s[r]=='i'||s[r]=='o'||s[r]=='u'){
                count++;
            }
            r++;
            ans=max(ans,count);
            
        }
        return ans;
    }
};