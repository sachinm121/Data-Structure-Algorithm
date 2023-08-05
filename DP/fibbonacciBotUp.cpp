//Bottom up (Tabulation)
class Solution {
public:
   //Bottom-Up (tabulation)
   //step1: create dp array 
   //step2: Base case analysis of Rec code and update dp array accordingly
    //step3: Find the range for the changing variable and copy paste the login in rec code accordingly 

    int fib(int n) {
        if(n <= 1)return n;
        vector<int>dp(n+1,0);
        dp[0] = 0;
        dp[1] = 1;

        for(int i=2;i<=n;i++){
            dp[i] = dp[i-1] + dp[i-2];
        }

        return dp[n];
    }
};