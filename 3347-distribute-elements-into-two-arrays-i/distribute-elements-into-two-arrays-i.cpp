class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1;
        vector<int> arr2;
        int n=nums.size();
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        int j=0;
        int x=0;
        for(int i=2;i<n;i++){
            
            if(arr1[j]>arr2[x]){
                arr1.push_back(nums[i]);
                j++;
            }
            else{
                arr2.push_back(nums[i]);
                x++;
            }
        }
        int y=arr2.size();
        int m=0;
        while(y>0){
            arr1.push_back(arr2[m]);
            m++;
            y--;
        }
        return arr1;
    }
};