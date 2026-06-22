// class Solution {
// public:
//     int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
//         int n=capacity.size();
//         vector<int> need;
//         for(int i=0;i<n;i++){
//             need.push_back(capacity[i]-rocks[i]);
//         }
//         sort(need.begin(),need.end());
//         int count=0;
//         for(int i=0;i<n;i++){
//             if(need[i]<=additionalRocks){
//                 count++;
//                 additionalRocks-=need[i];
//             }
//             else{
//                 break;
//             }
//         }
//         return count;
//     }
// };
class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n = capacity.size();

        vector<int> need(n);

        for(int i = 0; i < n; i++) {
            need[i] = capacity[i] - rocks[i];
        }

        sort(need.begin(), need.end());

        vector<long long> prefix(n);
        prefix[0] = need[0];

        for(int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] + need[i];
        }

        int low = 0;
        int high = n;
        int ans = 0;

        while(low <= high) {
            int mid = low + (high - low) / 2;

            long long rocksNeeded;

            if(mid == 0) {
                rocksNeeded = 0;
            } else {
                rocksNeeded = prefix[mid - 1];
            }

            if(rocksNeeded <= additionalRocks) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return ans;
    }
};