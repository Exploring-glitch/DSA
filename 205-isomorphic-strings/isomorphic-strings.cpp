class Solution {
public:
    bool isIsomorphic(string s, string t) {
        //TC=O(N) where N is the length of an input string, SC=O(1)
        int arr1[256] = {0};
        int arr2[256] = {0};

        for(int i=0; i<s.length(); i++) {
            if(arr1[s[i]] != arr2[t[i]]) {
                return false;
            }
            arr1[s[i]] = i+1;
            arr2[t[i]] = i+1;
        }
        return true;
    }
};