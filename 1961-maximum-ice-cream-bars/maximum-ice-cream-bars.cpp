class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int n=costs.size();
        sort(costs.begin(),costs.end());
        int count=0;
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+costs[i];
            if(sum>coins){
                break;
            }
            else{
                count++;
            }
        }
        return count;
    }
};