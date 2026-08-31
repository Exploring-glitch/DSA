class Solution {
public:
    int maxDepth(string s) {

        int depth = 0; int ans = 0; 
        for (char ch : s) { 
            if (ch == '(') { 
                depth++; ans = max(ans, depth); 
            } 
            else if (ch == ')') { 
                depth--; 
            } 
        } 
        return ans;

        /*
        int depth = 0;
        int maxDepth = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                depth++;
                maxDepth = max(maxDepth, depth);
            }
            else if (s[i] == ')') {
                depth--;
            }
        }

        return maxDepth;
        */
    }
};
    