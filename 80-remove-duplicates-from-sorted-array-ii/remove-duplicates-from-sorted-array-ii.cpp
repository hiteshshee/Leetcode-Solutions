class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int r=0;
        int count=0;
        while(r<n){
            int cnt=1;
            while(r+1<n&&nums[r]==nums[r+1]){
                cnt++;
                r++;
            }
            
            int times=min(cnt,2);
            while(times--) {
                nums[l]=nums[r];
                l++;
            }
            r++;
        }
        return l;
    }
};