class Solution {
public:
    string removeOuterParentheses(string s) {
        //Optimal Sol
        //TC=O(N), SC=O(1)
        string ans = "";
        int count = 0;

        for(int i=0; i<s.length(); i++) {
            if (s[i] == ')') count--;
            if(count != 0) {
                ans.push_back(s[i]);
            }
            if( s[i] == '(') count++;
        }
        return ans;
    }
};