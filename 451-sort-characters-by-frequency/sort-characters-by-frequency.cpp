class Solution {
public:
    string frequencySort(string s) {
        //Optimal Solution: TC=O(), SC=O()
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

        /*
        //Brute force Solution: TC=O(N^2 + 2N), SC=O(2K) where K is the distinct ch in s
        unordered_map<char, int> mp; //K space
        for(auto ch : s) {
            mp[ch]++;
        }

        vector<pair<char, int>> v(mp.begin(), mp.end()); //store the map mp into vector v //K space

        for(int i = 0; i < v.size(); i++) { //sort v by frequency //N^2
            for(int j = i + 1; j < v.size(); j++) {
                if(v[j].second > v[i].second) {
                    swap(v[i], v[j]);
                }
            }
        }

        string ans = "";
        for(auto i : v) { //N
            ans += string(i.second, i.first); //string(2, 'e') = 'ee'
        }

        return ans;
        */
    }
};
        