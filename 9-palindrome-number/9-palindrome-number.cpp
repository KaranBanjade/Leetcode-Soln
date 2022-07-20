class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        int temp = x;
        int rem = 0;
        long long pal = 0;
        while(temp!=0){
            rem = temp%10;
            pal = (pal*10) +rem;
            temp = temp/10;
        }
        if(pal == x)
            return true;
        return false;
    }
};