class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int m=nums.size();
        int n=m/2;
        unordered_map<int,int> freq;
        for(int i=0;i<m;i++){
            freq[nums[i]]++;
        }
        for(int a=0;a<m;a++){
            if(freq[nums[a]]%2==1){
                return false;
            }
        }
        return true;
    }
};