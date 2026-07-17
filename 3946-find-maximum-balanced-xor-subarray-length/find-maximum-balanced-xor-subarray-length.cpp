// class Solution {
// public:
//     int maxBalancedSubarray(vector<int>& nums) {
//         int n=nums.size();
        
//         int ans=0;
//         for(int j=0;j<n;j++){
//             int ecount=0;
//             int ocount=0;
//             int x=0;
           
//             for(int i=j;i<n;i++){
//                 if(nums[i]%2==0){
//                     ecount++;
//                 }
//                 else{
//                     ocount++;
//                 }
//                 x=x^nums[i];
                
//                 if(ecount==ocount&&x==0){
//                     ans=max(ans,ecount+ocount);
//                 }
//             }
//         }
//         return ans;
//     }
// };
class Solution {
public:
    int maxBalancedSubarray(vector<int>& nums) {
        int n=nums.size();

        map<pair<int,int>,int> mp;

        int ecount=0;
        int ocount=0;
        int x=0;
        int ans=0;

        mp[{0,0}]=-1;

        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                ecount++;
            }
            else{
                ocount++;
            }

            x=x^nums[i];

            pair<int,int> p={ecount-ocount,x};

            if(mp.find(p)!=mp.end()){
                ans=max(ans,i-mp[p]);
            }
            else{
                mp[p]=i;
            }
        }

        return ans;
    }
};