class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n=nums1.size();
        int odd=0;
        int even=0;

        for(int i=0;i<n;i++){
            if(nums1[i]%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        if(even>=1&&odd==0||odd>=1&&even==0||odd>=1&&even>=1){
            return true;
        }
        return false;
    }
};