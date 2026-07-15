class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        //TC=O(N), SC=O(1)
        int evenSum = 0, oddSum = 0;
        int x=1, y=2;

        for(int i=1; i<=n; i++) {
            oddSum += x;
            x += 2;
            evenSum += y;
            y += 2;
        }
        while(oddSum != 0) {
            int temp = oddSum;
            oddSum = evenSum % oddSum;
            evenSum = temp;
        }

        return evenSum;
    }
};