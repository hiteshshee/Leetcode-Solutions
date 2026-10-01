class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int> pfx(n);
        pfx[0]=nums[0];
        for(int i=1;i<n;i++){
            pfx[i]=nums[i]+pfx[i-1];
        }
        int sm=pfx[n-1];
        for(int i=0;i<n;i++){
            if(i==0){
                if(sm-pfx[i]==0)
                return i;
            }
        else{
            if(sm-pfx[i]==pfx[i-1])
                return i;
            }
        }
        return -1;
    }
};