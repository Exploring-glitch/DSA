class Solution {
public:
    bool rotateString(string s, string goal) {
        //Brute Force Solution
        //TC=O(N^2), SC=O(1)
        if(s.length() != goal.length()) return false;
        if(s == goal) return true;

        for(int i=0; i<s.length(); i++) { //O(n) times
            char ch = s[0];
            s.erase(0, 1); //remove 1 character in 0th position
            s.push_back(ch);
            if(s == goal) return true; //O(n) times
        }
        return false;
    }
};