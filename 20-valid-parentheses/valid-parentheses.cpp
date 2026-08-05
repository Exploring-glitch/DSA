class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0; i<s.size(); i++) {
            if(s[i] == '(' or s[i] == '[' or s[i] == '{') {
                st.push(s[i]);
            }
            else{
                if (st.empty()) return false;
                char lastEle = st.top();
                st.pop();
                if((s[i] == ')' && lastEle != '(') ||
                   (s[i] == ']' && lastEle != '[') ||
                   (s[i] == '}' && lastEle != '{')) 
                {
                return false;
                }
            } 
        }
        return st.empty();
    }
};