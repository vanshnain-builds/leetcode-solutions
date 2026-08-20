class Solution {
public:
    bool isPalindrome(int x) {
        long temp = x;
        if (temp<0) return false;
        else{
                long rev =0;
                while (temp != 0){
                    rev = rev*10 + (temp%10);
                    temp = floor(temp/10);
                }
                if (rev > INT_MAX || rev < INT_MIN) return false;
                if (rev == x) return true;
                else return false;
        }
    }
};