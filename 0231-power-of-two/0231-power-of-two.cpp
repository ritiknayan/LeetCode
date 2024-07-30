class Solution {
public:
    bool isPowerOfTwo(int n) {

         //brute force
        // for(int i =0;i<31;i++){
        //     int a = pow(2,i);
        //     if(n == a) return true;
        // }

        // return false;

        //bit manipulation
        return  (n>0 && (n & (n-1))==0) ? true:false;
        
    }
};