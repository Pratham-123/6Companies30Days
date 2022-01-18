class Solution {
public:
        
    
    void generateAllBalencedParentheses(string op,int open,int close,vector<string>& vec){
        if(open==0 && close==0){
            vec.push_back(op);
            return;
        }
        if(open!=0){
            string op1=op+"(";
            generateAllBalencedParentheses(op1,open-1,close,vec);
        }
        if(close>open){
            string op2=op+")";
            generateAllBalencedParentheses(op2,open,close-1,vec);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string op ="";
        int open = n;
        int close = n;
        generateAllBalencedParentheses(op, open, close, res);
        return res;
    }
};
