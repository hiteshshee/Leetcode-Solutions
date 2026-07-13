class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> answer;
        for(int start=1;start<=9;start++){
            int num=0;
            for(int i=start;i<=9;i++){
                num=num*10+i;
                if(num>=low&&num<=high){
                    answer.push_back(num);
                }
            }
        }
        sort(answer.begin(),answer.end());
        return answer;
    }
};