class Solution
{
    public:
    //Function to count number of ways to reach the nth stair 
    //when order does not matter.
    long long countWays(int n)
    {
        // your code here
       int dp[n+1];
       long long int mod = 1000000007;
       dp[0] = 1;
       dp[1] = 1;
       
       for(int i=2;i<=n;i++){
           dp[i] = (dp[i-2] +1)%mod;
       }
       return dp[n]%mod;
    }
};
