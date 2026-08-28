class Solution {
public:
    bool rotateString(string s, string goal) {
        //ANOTHER Solution
        //TC=O(N^2), SC=O(N)
        if(s.length() != goal.length()) return false;
        if(s == goal) return true;
        string newString = s + s; //double the string eg.- s=abc newString=abcabc
       
        //find goal in the doubled string. If not found, find() returns no position found i.e npos
        if(newString.find(goal) == string::npos) return false; 
        return true;



        //Brute Force Solution
        //TC=O(N^2), SC=O(1)
        /*
        if(s.length() != goal.length()) return false;
        if(s == goal) return true;

        for(int i=0; i<s.length(); i++) { //O(n) times
            char ch = s[0];
            s.erase(0, 1); //remove 1 character in 0th position
            s.push_back(ch);
            if(s == goal) return true; //O(n) times
        }
        return false;
        */
    }
};