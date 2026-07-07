class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum=0;
        int temp=n;
        int x=0;
        while(temp>0){
            int digit=temp%10;
            if(digit!=0){
                x=x*10+digit;
            }
            temp=temp/10;
        }
        int temp2=x;
        while(temp2>0){
            sum+=temp2%10;
            temp2/=10;
        }
        int temp3=x;
        int u=0;
        while(temp3>0){
            int digits=temp3%10;
            u=u*10+digits;
            temp3/=10;
        }
        return u*sum;
    }
};