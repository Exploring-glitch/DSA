class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int oddSum = 0, evenSum = 0;
        int x = 1, y = 2;
        for(int i=1; i<=n; i++) {
            oddSum += x; 
            x += 2;
            evenSum += y;
            y += 2;
        }
        while (evenSum != 0) {
            int temp = evenSum;
            evenSum = oddSum % evenSum;
            oddSum = temp;
        }
        return oddSum;
    }
};