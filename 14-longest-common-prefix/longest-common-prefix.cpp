class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        //Brute Force Approach
        //TC= O(M * N) where m is the length of the shortest word in the string and n in the length of the string
        //SC = 1

        string str = strs[0]; //get the 1st string i.e strs[0] 
        string ans = "";

        for(int i=0; i<str.length(); i++) { //iterate on str
            char ch = str[i];
            
            bool match = true;
            for(int j=1; j<strs.size(); j++) { //iterate on the remaining strs i.e from strs[1]
                if(i >= strs[j].length() || strs[j][i] != ch) { //Not a match condition
                    match = false;
                    break;
                }
            }

            if(match  == false) break;
            else ans.push_back(ch);
        }
        return ans;
    }
};