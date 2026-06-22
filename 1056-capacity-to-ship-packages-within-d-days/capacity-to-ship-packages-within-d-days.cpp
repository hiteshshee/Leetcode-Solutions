class Solution {
public:
    int dayss(vector<int>& weights,int cap){
        int days=1;
        int load=0;
        for(int i=0;i<weights.size();i++){
        if(load+weights[i]>cap){
            days++;
            load=weights[i];
        }
        else{
            load=load+weights[i];
        }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int maxi=*max_element(weights.begin(),weights.end());
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+weights[i];
        }
        int low=maxi;
        int high=sum;
        
        while(low<=high){
            int mid=low+(high-low)/2;
            int daysreq=dayss(weights,mid);
            if(daysreq<=days){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};