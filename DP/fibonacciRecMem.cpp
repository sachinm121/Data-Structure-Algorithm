//Using DP
class Solution {
public:
    //Rec + mem
    //step1: create dp array + pass in function
    //step2: store the ans in dp array
    //step3: create if dp array already has answer, if yes , then return, just after base case
    int solve(int n,vector<int>&dp){
        if(n <= 1){
            return n;
        }

        if(dp[n] != -1){
            return dp[n];
        }

        return dp[n] = solve(n-1,dp) + solve(n-2,dp);
    }
    int fib(int n) {
        vector<int>dp(n+1,-1);
        return solve(n,dp);
    }
};