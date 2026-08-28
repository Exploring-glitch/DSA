class Solution {
public:
    bool isAnagram(string s, string t) {
        //Optimal Solution:
        //TC=O(), SC=O()
        int freq[26] = {0};
        if(s.length() != t.length()) return false;

        for(int i=0; i<s.length(); i++) { //0 to 6
            freq[s[i] - 'a']++; //0->1, 13->0,... 
            freq[t[i] - 'a']--; // 13->-1, 0->0,...
        }

        for(int i=0; i<26; i++) {
            if(freq[i] != 0) return false;
        }
        return true;




        //Brute Force Solution:
        //TC= O(N LOG N), SC=O(1)
        /*
        sort(s.begin(), s.end()); //N log N
        sort(t.begin(), t.end()); //N log N

        if(s != t) return false;
        return true;
        */
    }
};