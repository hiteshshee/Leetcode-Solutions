class Solution {
public:
    long long product(long long x){
        long long p=1;
        while(x){
            p*=x%10;
            x/=10;
        }
        return p;
    }

    int smallestNumber(int n, int t) {
        while(true){
            long long p=product(n);
            if(p%t==0) return n;
            n++;
        }
    }
};