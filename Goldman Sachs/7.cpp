class Solution {
  public:
    int findPosition(int N , int M , int K) {
        if(N==1) return 1;
        int ans = M%N+K-1;
        if(ans==N)
        {
            return ans;
        }
       
        return ans%N;
    }
};