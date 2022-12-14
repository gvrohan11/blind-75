// Dynamic Programing
// O(n)

class Solution {
public:
    int climbStairs(int n) {
        if (n == 1) return 1;
        if (n == 2) return 2;
        int a = 1;
        int b = 2;
        int pos;
        for (int i = 3; i <= n; i++) {
            pos = a + b;
            a = b;
            b = pos;
        }
        return pos;
    }
};
