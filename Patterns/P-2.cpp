#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern19(int N) {
        int s = 2 * N - 2;
        int ls = 2 * N - s;

        // Loop for upper half rows
        for (int i = 0; i < N; i++) {
            for (int j = 0; j <= i ; j++) {
                cout << "*";
            }
            for (int j = 0; j < s; j++) {
                cout << " ";
            }
            for (int j = 0; j <= i; j++) {
                cout << "*";
            }
            s = s - 2;
            cout << endl;
        }
        
        //Loop for lower half
        for (int i = 0; i < N; i++){
            for(int j = 0; j < N-i-1; j++){
                cout << "*";
            }
            for(int j = 0; j < ls; j++){
                cout << " ";
            }
            for(int j = 0; j < N-i-1; j++){
                cout << "*";
            }
            ls = ls + 2;
            cout << endl;
        }
    }
};

int main() {
    Solution sol;
    int N = 5;
    sol.pattern19(N);
    return 0;
}