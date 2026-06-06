class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        long rev = 0;
        while(x > 0){
            int d = x % 10;
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