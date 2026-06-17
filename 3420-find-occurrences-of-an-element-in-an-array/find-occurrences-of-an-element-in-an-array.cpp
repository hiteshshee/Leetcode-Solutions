class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector<int> answer;
        vector<int> position;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==x){
                position.push_back(i);
            }
        }
        for(int i=0;i<queries.size();i++){
            if(queries[i]<=position.size()){
                answer.push_back(position[queries[i]-1]);
            }
            else{
                answer.push_back(-1);
            }
        }
        return answer;
    }
};