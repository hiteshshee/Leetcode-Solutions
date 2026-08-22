class Solution {
public:
    bool checkDivisibility(int n) {
        int d;
        int product=1;
        int sum=0;
        int o=n;
        while(n!=0){
            
            d=n%10;
            sum=sum+d;
            product=product*d;
            n=n/10;

        }
        if(o%(sum+product)==0){
            return true;
        }
        return false;
    }
};