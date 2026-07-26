class Solution {
public:
    int minMoves(vector<int>& nums) {
        if(nums.size()==1){
            return 0;
        }
        int moves=0;
        int largest=*max_element(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            moves=moves+largest-nums[i];
        }
        return moves;
    }
};