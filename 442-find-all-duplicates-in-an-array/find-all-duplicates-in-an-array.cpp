class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        for(auto it=freq.begin();it!=freq.end();it++){
            if(it->second==2){
                ans.push_back(it->first);
            }
        }
        return ans;
    }
};