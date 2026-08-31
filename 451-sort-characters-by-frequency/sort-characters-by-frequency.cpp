class Solution {
public:
    string frequencySort(string s) {
        //Brute fOrce Solution: TC=O(N^2 + N), SC=O()
        unordered_map<char, int> mp; //
        for(auto ch : s) {
            mp[ch]++;
        }

        vector<pair<char, int>> v(mp.begin(), mp.end()); //store the map mp into vector v 

        for(int i = 0; i < v.size(); i++) { //sort v by frequency //N^2
            for(int j = i + 1; j < v.size(); j++) {
                if(v[j].second > v[i].second) {
                    swap(v[i], v[j]);
                }
            }
        }

        string ans = "";
        for(auto i : v) { //N
            ans += string(i.second, i.first);
        }

        return ans;
    }
};