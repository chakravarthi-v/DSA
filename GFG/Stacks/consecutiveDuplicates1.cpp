#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to remove consecutive duplicates from given string using Stack.
    string removeConsecutiveDuplicates(string s)
    {
        // Your code here
        stack<char> res;
        res.push(s[0]);
        string p="";
        p+=s[0];
        int n=s.length();
        for(int i=1;i<n;i++){
            if(res.top()!=s[i]){
                p+=s[i];
                res.push(s[i]);
            }
        }
        return p;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.removeConsecutiveDuplicates(s)<<endl;
    }
    
	return 0;
}  // } Driver Code Ends