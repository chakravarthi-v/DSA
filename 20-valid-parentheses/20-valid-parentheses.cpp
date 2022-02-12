class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> se={{'}','{'},{']','['},{')','('}};
        stack<char> st;
        st.push(s[0]);
       for(int i=1;i<s.length();i++){
           if(se.find(s[i])!=se.end()){
               if(st.empty())return false;
               if(se[s[i]]==st.top()){
                   st.pop();
               }
               else{
                   return false;
               }
           }
           else{
               st.push(s[i]);
           }
       }
        if(st.empty())return true;
        else return false;
    }
};