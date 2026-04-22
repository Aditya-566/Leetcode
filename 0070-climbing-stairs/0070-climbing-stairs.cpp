class Solution {
public:
    int climbStairs(int n) {
    //   if(n<0) return 0;
    //   if(n==0) return 1;
    //   int ways2=climbStairs(n-2);
    //   int ways1=climbStairs(n-1);
    //   return ways2+ways1;

        if (n <= 2) return n;

        int prev2 = 1, prev1 = 2;

        for (int i = 3; i <= n; i++) {
            int curr = prev1 + prev2;
            prev2 = prev1;
            prev1 = curr;
        }

        return prev1;
 
    }
};