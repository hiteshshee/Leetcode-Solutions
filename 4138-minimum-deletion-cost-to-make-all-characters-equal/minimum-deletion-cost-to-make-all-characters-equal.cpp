class Solution {
public:
    long long minCost(string s, vector<int>& cost) {
        int n=s.length();
        vector<long long> freq(26,0);
        long long total=0;
        for(int i=0;i<n;i++){
            total=total+cost[i];
            freq[s[i]-'a']+=(long long)cost[i];
        }
        long long maxi=LLONG_MIN;
        for(int i=0;i<26;i++){
            maxi=max(freq[i],maxi);
        }
        return total-maxi;
    }
};