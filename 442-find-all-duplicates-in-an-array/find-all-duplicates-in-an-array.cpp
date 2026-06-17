// class Solution {
// public:
//     vector<int> findDuplicates(vector<int>& nums) {
//         vector<int> ans;
//         unordered_map<int,int> freq;
//         for(int i=0;i<nums.size();i++){
//             freq[nums[i]]++;
//         }
//         for(auto it=freq.begin();it!=freq.end();it++){
//             if(it->second==2){
//                 ans.push_back(it->first);
//             }
//         }
//         return ans;
//     }
// };
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        vector<int> ans;

        for(int i = 0; i < nums.size(); i++) {

            int idx = abs(nums[i]) - 1;

            if(nums[idx] < 0) {
                ans.push_back(abs(nums[i]));
            }
            else {
                nums[idx] *= -1;
            }
        }

        return ans;
    }
};