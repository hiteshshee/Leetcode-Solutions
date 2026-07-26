class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        int curr=nums[0];
        int i=0;
        while(curr<nums.back()){
            if(i<nums.size()&&nums[i]==curr){
                while(i<nums.size()&&nums[i]==curr){
                    i++;
                }
            }else{
                ans.push_back(curr);
            }
            curr++;
        }
        return ans;
    }
};