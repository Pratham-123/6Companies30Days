class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        long long product = 1;
        long long left = 0;
        long long right = 0;
        int res = 0;
        
        while(right<n)
        {
            product *= a[right];
            
            while(product>= k)
            {
                 product /= a[left];
                 left++;
            }
            res += right - left + 1;
            right ++;
        }
        return res;
    }
};