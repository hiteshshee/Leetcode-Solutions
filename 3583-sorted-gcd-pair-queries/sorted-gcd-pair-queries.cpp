//need revisit
class Solution{
public:
    vector<int>gcdValues(vector<int>&nums,vector<long long>&queries){
        int mx=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>mx){
                mx=nums[i];
            }
        }
        vector<int>freq(mx+1,0);
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        vector<long long>cnt(mx+1,0);
        for(int i=1;i<=mx;i++){
            for(int j=i;j<=mx;j=j+i){
                cnt[i]=cnt[i]+freq[j];
            }
        }
        vector<long long>exact(mx+1,0);
        for(int i=mx;i>=1;i--){
            exact[i]=cnt[i]*(cnt[i]-1)/2;
            for(int j=i+i;j<=mx;j=j+i){
                exact[i]=exact[i]-exact[j];
            }
        }
        vector<long long>pref(mx+1,0);
        for(int i=1;i<=mx;i++){
            pref[i]=pref[i-1]+exact[i];
        }
        vector<int>ans;
        for(int i=0;i<queries.size();i++){
            int l=1;
            int r=mx;
            while(l<r){
                int mid=l+(r-l)/2;
                if(pref[mid]>queries[i]){
                    r=mid;
                }else{
                    l=mid+1;
                }
            }
            ans.push_back(l);
        }
        return ans;
    }
};