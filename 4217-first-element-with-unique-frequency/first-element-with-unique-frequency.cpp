class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int,int> freq;
        int n=nums.size();
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
       
        unordered_map<int,int> freqq;
        for(auto it=freq.begin();it!=freq.end();it++){
            freqq[it->second]++;
        }
       for(int i=0;i<n;i++){
        if(freqq[freq[nums[i]]]==1){
            return nums[i];
        }
       }
        
        return -1;
    }
};