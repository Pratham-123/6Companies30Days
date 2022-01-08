class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        vector<int> ans;
        deque<int> q;
        for(int i = 0 ; i < k ; i++){
            int v = arr[i];
            while(!q.empty() && q.back() < v) q.pop_back();
            q.push_back(v);
        }
        ans.push_back(q.front());
        for(int i = 0 , j = k ; j < n ; i++ , j++){
            if(arr[i] == q[0]) q.pop_front();
            int v = arr[j];
            while(!q.empty() && q.back() < v) q.pop_back();
            q.push_back(v);
            ans.push_back(q[0]);
        }
        return ans;
    }
};
