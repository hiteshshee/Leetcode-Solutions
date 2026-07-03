class Solution {
public:
    int minAllOneMultiple(int k) {
        int rem=1;
        int cnt;
        for(cnt=1;cnt<=k;cnt++){
            rem=(rem*10+1)%k;
            if(rem==0){
                return cnt+1;
            }
        }
        return -1;
    }
};