class Solution {
public:
    long long mod=1e9+7;
    long long power(long long x, long long n) {
        if (n == 0) return 1;

        long long half=power(x, n / 2);

        if (n%2==0) {
            return(half*half)%mod;
        }

        return(((half*half)%mod)*x)%mod;
}
    
    int countGoodNumbers(long long n) {
        long long evencount=(n+1)/2;
        long long oddcount=n/2;

        long long even=power(5,evencount);
        long long odd=power(4,oddcount);
        return (even*odd)%mod;
    }
};