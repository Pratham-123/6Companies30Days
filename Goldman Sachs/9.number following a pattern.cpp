public:
    string printMinNumberForPattern(string s){
        // code here 
        stack<char> st;
        string res = "";
        int num = 1;
        
        for(int i=0;i< s.length();i++)
        {
            char c = s[i];
            
            if(c == 'D'){
                st.push(num);
                num++;
            }
            else{
                st.push(num);
                num++;
                
                while(!st.empty())
                {
                    res += to_string(st.top());
                    st.pop();
                }
            }
            
        }
        st.push(num);
        while(!st.empty())
        {
            res += to_string(st.top());
            st.pop();
        }
        return res;
    }