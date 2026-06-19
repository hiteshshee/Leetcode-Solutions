class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int> answer(n+1);
        answer[0]=0;
        for(int i=1;i<n+1;i++){
            answer[i]=answer[i-1]+gain[i-1];
        }
        return *max_element(answer.begin(),answer.end());
    }
};