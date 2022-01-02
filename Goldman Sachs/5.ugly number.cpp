class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	    vector<ull> dp(n);
        dp[0] =1;
        ull p1=0 ,p2=0,p3=0;
        
        for(ull i=1;i<n;i++)
        {
            ull two = dp[p1]*2;
            ull three = dp[p2]*3;
            ull five = dp[p3]*5;
            
            dp[i] = min(two, min(three, five));
            
            if(dp[i] == two) p1++;
            if(dp[i] ==  three) p2++;
            if(dp[i] == five ) p3++;
        }
        return dp[n-1];
	}