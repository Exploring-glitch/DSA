class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        int rev = 0;
        while(x > 0){
            int d = x % 10;
            if ((rev > INT_MAX / 10) || (rev < INT_MIN / 10)){
                return 0;
            }
            rev = rev * 10 + d;
            x = x / 10;
        }
        if (temp == rev){
            return 1;
        } 
        else {
            return 0;
        }
    }
};