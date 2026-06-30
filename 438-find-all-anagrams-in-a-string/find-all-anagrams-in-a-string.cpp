class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int k=p.length();
        int n=s.length();
        vector<int> ans;
        vector<int> freqS(26,0);
        vector<int> freqP(26,0);
        if(k>n){
            return ans;
        }
        for(int i=0;i<k;i++){
            freqP[p[i]-'a']++;
        }
        for(int i=0;i<k;i++){
            freqS[s[i]-'a']++;
        }
        if(freqS==freqP){
            ans.push_back(0);
        }
        for(int i=k;i<n;i++){
            freqS[s[i]-'a']++;
            freqS[s[i-k]-'a']--;
            if(freqS==freqP){
                ans.push_back(i-k+1);
            }
        }
        return ans;
    }
};