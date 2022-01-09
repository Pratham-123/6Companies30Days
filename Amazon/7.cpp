class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		   vector<int> visited(26,0);
		   string ans = "";
		   vector<char> v;
		   int n = A.length();
		   
		   for(int i=0;i<n;i++)
		   {
		       if(!visited[A[i] - 'a']){
		           v.push_back(A[i]);
		       }
		       visited[A[i] - 'a']++;
		       int f = 0;
		       int m = v.size();
		       for(int j =0;j<m;j++){
		           if(visited[v[j] - 'a'] ==1)
		           {
		               ans.push_back(v[j]);
		               f=1;
		               break;
		           }
		       }
		       if(f==0)
		       {
		           ans.push_back('#');
		       }
		       
		   }
		   return ans;
    }
};
