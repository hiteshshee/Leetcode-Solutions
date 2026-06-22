class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n=capacity.size();
        vector<int> need;
        for(int i=0;i<n;i++){
            need.push_back(capacity[i]-rocks[i]);
        }
        sort(need.begin(),need.end());
        int count=0;
        for(int i=0;i<n;i++){
            if(need[i]<=additionalRocks){
                count++;
                additionalRocks-=need[i];
            }
            else{
                break;
            }
        }
        return count;
    }
};