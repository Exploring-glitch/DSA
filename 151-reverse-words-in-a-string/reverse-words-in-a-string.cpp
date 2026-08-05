class Solution {
public:
    string (reverseWords(string s)) {
        //TC=O(N) where n is the length of string
        //SC=0(1)

        reverse(s.begin(), s.end()); //1 time
        string ans;

        for(int i=0; i<s.length(); i++) { //n times
            string word = "";
            while(i<s.length() && s[i] !=' ') {
                word += s[i];
                i++;
            }
            reverse(word.begin(), word.end()); //1 time
            if(word.length() > 0 ) {
                if(ans.empty()) ans += word;
                else ans += " " + word;
            }
        }
        return ans;
    }
};