#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        unordered_map<char,char> res={{'}','{'},{')','('},{']','['}};
        stack<char> st;
        st.push(x[0]);
        int len=x.length();
        for(int i=1;i<len;i++){
            if(res.find(x[i])!=res.end()){
                if(st.empty())return false;
                if(st.top()==res[x[i]]){
                    st.pop();
                }
                else{
                    return false;
                }
            }
            else{
                st.push(x[i]);
            }
        }
        if(st.empty()){
            return true;
        }
        return false;
    }

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends