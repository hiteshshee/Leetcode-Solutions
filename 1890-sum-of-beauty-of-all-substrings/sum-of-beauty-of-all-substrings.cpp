class Solution {
public:
    int beautySum(string s) {
        
        int n=s.length();
        int sum=0;
        int mini;
        int maxi;
        for(int i=0;i<n;i++){
            unordered_map<char,int> freq;
            for(int j=i;j<n;j++){
                freq[s[j]]++;
                maxi=INT_MIN;
                mini=INT_MAX;
                for(auto it=freq.begin();it!=freq.end();it++){
                    if(it->second!=0){
                        mini=min(it->second,mini);
                        maxi=max(it->second,maxi);
                    }
                }
                sum=sum+maxi-mini;
            }
            
        }
        return sum;
    }
};