class Solution {
public:
    string frequencySort(string s) {
        
        unordered_map<char, int> freq;

        // Count frequency
        for(char ch : s) {
            freq[ch]++;
        }

        // Bucket: index = frequency
        vector<vector<char>> bucket(s.size() + 1);

        for(auto p : freq) {
            bucket[p.second].push_back(p.first);
        }

        // Build answer from highest frequency
        string ans = "";

        for(int i = s.size(); i >= 1; i--) {
            for(char ch : bucket[i]) {
                ans += string(i, ch);
            }
        }

        return ans;
    }
};
        