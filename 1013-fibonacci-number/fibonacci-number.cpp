class Solution {
public:
    int fib(int n) {
        if (n == 0 || n == 1) return n;

        int a = 0, b = 1;
        for (int i=2 ; i <=n ; i++){ //0 1 1 2 3 
            int c = a + b;
            a = b;
            b = c;
        }
        return b;
    }
};