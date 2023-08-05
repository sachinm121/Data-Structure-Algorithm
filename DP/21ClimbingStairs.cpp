class Solution {
public:
    //using recursion
    int solve(int n){
        if(n <= 3){
            return n;
        }

        return solve(n-1) + solve(n-2);
    }
    int climbStairs(int n) {
        return solve(n);
    }
};