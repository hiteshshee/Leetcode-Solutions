// class Solution {
// public:
//     int maxIceCream(vector<int>& costs, int coins) {
//         int n=costs.size();
//         sort(costs.begin(),costs.end());
//         int count=0;
//         int sum=0;
//         for(int i=0;i<n;i++){
//             sum=sum+costs[i];
//             if(sum>coins){
//                 break;
//             }
//             else{
//                 count++;
//             }
//         }
//         return count;
//     }
// };
class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        vector<int> freq(100001, 0);

        for (int cost : costs) {
            freq[cost]++;
        }

        int ans = 0;

        for (int cost = 1; cost <= 100000; cost++) {
            if (freq[cost] == 0) continue;

            int canBuy = min(freq[cost], coins / cost);

            ans += canBuy;
            coins -= canBuy * cost;

            if (coins < cost) break;
        }

        return ans;
    }
};