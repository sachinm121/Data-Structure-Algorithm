class Solution {
public:
    //Space optimization bottom up
    int fib(int n) {
        if(n <= 1){
            return n;
        }

        //Step1: Replace dp array with your optimised structures and remove dp array
        int prev1 = 1;
        int prev2 = 0;
        int curr;
        for(int i=2;i<=n;i++){
        //Step2: replace dp value to prev1,prev2
            curr = prev1 + prev2;

            //Step3: update prev1 and prev2
            prev2 = prev1;
            prev1 = curr;
        }

        return prev1;
    }
};