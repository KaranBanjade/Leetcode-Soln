class Solution {
public:
    bool isPowerOfTwo(int n) {
        int num=n;
        if(n==1)
            return true;
        int bits=0;
        while(num){
            num/=2;
            bits++;
        }
        if(pow(2,bits-1) == n)
            return true;
        return false;
    }
};