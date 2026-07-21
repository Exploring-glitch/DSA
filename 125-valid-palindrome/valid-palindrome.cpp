class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";

        if (s == "") return true;

        for (char c : s) {
            if(isalnum(c)) {
                c = tolower(c);
                str += c;
            }
        }

        int p1 = 0;
        int p2 = str.size() - 1;
        while (p1 < p2) {
            if (str[p1] != str[p2]) return false;
            p1++;
            p2--;
        }
        return true;
    }
};