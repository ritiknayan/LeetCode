
#define mod 1000000007
class Solution {
public:

    long long power(long long n, long long m){

        if(m == 0) return 1;

        long long ans = power(n, m/2);

        ans = ans * ans;
        ans = ans % mod;
        if(m % 2)  ans = n * ans;
        ans = ans  % mod;

        return ans;
    }
    int countGoodNumbers(long long n) {

        // brute force
    //     long long ans = 1;

    //     for(int i =0;i<n;i++){
    //   if(i % 2 == 0){
    //     ans = ans * 5;
    //     ans = ans % mod;
    //   } 
    //   if(i % 2 == 1){
    //     ans = ans * 4;
    //     ans = ans % mod;
    //   }

    //     }

        long long odd = n/2;
        long long even = n/2 + n%2;


        return (power(5,even) * power(4,odd)) % mod;
        
    }
};