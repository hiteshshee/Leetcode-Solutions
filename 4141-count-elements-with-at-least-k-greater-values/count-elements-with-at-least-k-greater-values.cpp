class Solution {
public:
    int countElements(vector<int>& nums,int k) {
        if(k==0){
            return nums.size();
        }

        vector<int> temp=nums;
        sort(temp.begin(),temp.end());

        int n=nums.size();
        int count=0;

        for(int i=0;i<n;i++){
            int l=0;
            int r=n-1;
            int idx=n;

            while(l<=r){
                int mid=l+(r-l)/2;
                if(temp[mid]>nums[i]){
                    idx=mid;
                    r=mid-1;
                }
                else{
                    l=mid+1;
                }
            }

            int greater=n-idx;
            if(greater>=k){
                count++;
            }
        }

        return count;
    }
};