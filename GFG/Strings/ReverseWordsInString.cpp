#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        int len=S.length(),res=0,i;
        for(i=0;i<len;i++){
            if(S[i]=='.'){
                reverse(S.begin()+res,S.begin()+i);
                res=i+1;
            }
        }
        reverse(S.begin()+res,S.begin()+i);
        reverse(S.begin(),S.end());
        return S;
    } 
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends