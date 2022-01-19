class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string S) {
        //Your code here
         int sign=0,len = S.length();
        long int out;
        for(int i=0;i<len;i++){
            if(i==0 && S[i] == 45){
                sign = 1;
                continue;
            }
            if(S[i] >= '0' && S[i] <= '9'){
                if(i==0)
                    out = S[i] - 48;
                else{
                    out = out*10;
                    out = out + (S[i] - 48);
                }
            }
            else{
                return -1;
            }
        }
        if(sign == 1)
            out = 0 - out;
        return out;
    }
};
