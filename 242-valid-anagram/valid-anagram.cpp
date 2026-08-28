class Solution {
public:
    bool isAnagram(string s, string t) {
        //TC= O(N LOG N), SC=O(1)
        sort(s.begin(), s.end()); //N log N
        sort(t.begin(), t.end()); //N log N

        if(s != t) return false;
        return true;
    }
};