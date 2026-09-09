class Solution {
public:
    int climbStairs(int n) {
        // if (n==1) return 1;
        // if (n==2) return 2;
        // else return climbStairs(n-1)+climbStairs(n-2);
        // TLE because we are again calculating value of same number due to recurisive calls 
        // Hence instead we will store it in variable
        if (n<=2) return n;
        int prev2=1;
        int prev1=2;
        for (int i=3; i<=n; i++){
            int current = prev1+prev2;
            prev2=prev1;
            prev1=current;
        } 
        return prev1;
    }

};