class Solution {
public:
    int mirrorDistance(int n) {
        int temp=n;
        int digits;
        int rev=0;
        while(temp>0){
            digits=temp%10;
            rev=rev*10+digits;
            temp/=10;
        }
        return abs(n-rev);
    }
};