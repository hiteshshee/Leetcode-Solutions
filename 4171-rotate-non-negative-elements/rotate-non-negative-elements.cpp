class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> noneg;
        vector<int> neg;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                neg.push_back(nums[i]);
            }
            else{
                noneg.push_back(nums[i]);
            }
        }
        if(noneg.empty()) return nums;
        int m=noneg.size();
        int x=k%m;
        vector<int> rotated;
        for(int i=x;i<m;i++){
            rotated.push_back(noneg[i]);
        }
        for(int i=0;i<x;i++){
            rotated.push_back(noneg[i]);
        }
        int negindx=0;
        int nonindx=0;
        vector<int> answer;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                answer.push_back(neg[negindx]);
                negindx++;
            }
            else{
                answer.push_back(rotated[nonindx]);
                nonindx++;
            }
        }
        return answer;
    }
};