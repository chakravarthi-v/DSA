class Solution {
public:
    void parenthesis(vector<string> &res,int open,int close,int n,string s){
        if(s.length()==2*n){
            res.push_back(s);
            return ;
        }
        if(open<n)parenthesis(res,open+1,close,n,s+"(");
        if(close<open)parenthesis(res,open,close+1,n,s+")");
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        parenthesis(res,0,0,n,"");
        return res;
    }
};