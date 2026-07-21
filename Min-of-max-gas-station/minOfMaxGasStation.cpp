#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long double minimiseMaxDistance(vector<int> arr, int k) {
        //TC=O((N-1)log(N-1) + KlogN), SC=O(N-1);
        int n = arr.size();
        vector<int> howMany(n-1,0); 
        priority_queue<pair<long double, int>> pq;

        for(int i=0; i<n-1; i++) { //runs n-1 times
            pq.push({ (arr[i+1]-arr[i]), i }); //log n-1
        }

        for(int i=1; i<=k; i++) { //runs k times
            auto tp = pq.top();
            pq.pop();
            int secIdx = tp.second;
            howMany[secIdx]++;
            long double initialDist = arr[secIdx + 1] - arr[secIdx]; 
            long double newSecLen = initialDist /(long double) (howMany[secIdx] + 1);
            pq.push({newSecLen, secIdx}); //log n
        }

        return pq.top().first;
    }
};



int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 4;
    Solution obj;
    long double ans = obj.minimiseMaxDistance(arr, k);
    cout << "The answer is: " << ans << "\n";
    return 0;
}