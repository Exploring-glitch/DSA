#include <bits/stdc++.h>
using namespace std;

class Allocation {
public :
    bool isAllocationPossible(vector<int>arr, int mid, int students) {
        int pages = 0;
        int numberOfStudents = 1; 
        for(int i=0; i<arr.size(); i++) {
            if(pages + arr[i] > mid) {
                numberOfStudents++;
                pages = arr[i];
            }
            else {
                pages += arr[i];
            }
        }
        if(numberOfStudents > students) return false;
        return true;
    }

    int allocateBooks(vector<int>& arr, int students) {
        int maxi = INT_MIN;
        int sum = 0;
        for(int i=0; i<arr.size(); i++) {
            maxi = max(maxi, arr[i]);
            sum += arr[i];
        }

        int low = maxi;
        int high = sum;
        int ans = -1;
        while(low <= high) {
            int mid = (low + high)/2;
            if(isAllocationPossible(arr, mid, students) == true) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return ans;
    }
};


int main() {
    //TC= O(N * log(sum of array - max element + 1), SC=O(1)
    Allocation a;
    vector<int> arr = {12,36,64,90};
    int students = 2;
    cout << "Answer = " << a.allocateBooks(arr, students) <<endl;
    return 0;
}