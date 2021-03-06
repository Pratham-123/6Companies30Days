class Solution {
	public:
		int CountWays(string s){
		    // Code here
		 if(s.length() ==0 || s[0] == '0') return 0;
        if(s.length() == 1) return 1;
        int MOD = pow(10,9) + 7;
        int count1 = 1;
        int count2 =1;
        for(int i=1;i<s.length(); ++i)
        {
            int d = s[i] - '0';
            int dd = (s[i-1] - '0')*10 + d;
            
            int count = 0;
            
            if(d>0) count += count2;
            if(dd >=10 && dd<= 26) count += count1;
            
            count1 = count2 % MOD; // prev to prev
            count2 = count % MOD;  // count2 is prev
        }
        return count2 % MOD;
		}

};