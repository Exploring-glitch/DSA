#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void revArray(vector<int>& arr, int n){ //'&' implies pass by reference where no copy is created and any changes in the vector will change the original vector in int main function.
        int p1 = 0;
        int p2 = n - 1;
        while (p1 < p2){
            swap (arr[p1], arr[p2]);
            p1 = p1 + 1;
            p2 = p2 - 1;
        }
    }
};


int main() {
    Solution s;
    
    vector<int> arr = {1,2,3,4,5};
    int n = arr.size();
    cout << "Array elements: ";
    for(int i : arr){
        cout << i << " ";
    }
    
    cout << "\nReverse array elements: ";
    s.revArray(arr, n);
    for (int i : arr){
        cout << i << " ";
    }
    
    return 0;
}