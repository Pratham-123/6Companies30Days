string encode(string str)
{     
  //Your code here 
   string res ="";
  int n = str.length();
    for (int i = 0; i < n; i++) {
 
       
        int count = 1;
        while (i < n - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }
        res.push_back(str[i]);
        res += to_string(count);
    }
    return res;
 
  
}     