class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> mult;

        for(int i = 0; i < n; i++) {
            if(nums[i] % k == 0) {
                mult.push_back(nums[i]);
            }
        }

        int m = mult.size();

        if(m == 0) {
            return k;
        }

        sort(mult.begin(), mult.end());

        int l = 0;

        for(long long i = k; ; i += k) {

            if(l >= m || mult[l] != i) {
                return i;
            }

            
            while(l < m && mult[l] == i) {
                l++;
            }
        }

        return -1;
    }
};