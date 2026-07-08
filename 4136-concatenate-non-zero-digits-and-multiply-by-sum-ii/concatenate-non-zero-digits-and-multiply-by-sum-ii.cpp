class Solution {
public:
    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        int n=s.size(),mod=1e9+7;
        vector<long long> p(n+1,1),h(1),c(n+1),sm(n+1);
        for(int i=1;i<=n;i++)p[i]=p[i-1]*10%mod;
        for(int i=0;i<n;i++){
            c[i+1]=c[i];
            sm[i+1]=sm[i]+s[i]-'0';
            if(s[i]!='0'){
                h.push_back((h.back()*10+s[i]-'0')%mod);
                c[i+1]++;
            }
        }
        vector<int> ans;
        for(int i=0;i<queries.size();i++){
            int l=queries[i][0],r=queries[i][1],a=c[l],b=c[r+1];
            long long x=(h[b]-h[a]*p[b-a])%mod;
            if(x<0)x+=mod;
            ans.push_back(x*((sm[r+1]-sm[l])%mod)%mod);
        }
        return ans;
    }
};