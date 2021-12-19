#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to remove pair of duplicates from given string using Stack.
    string removePair(string str)
    {
        // Your code here
        stack<char> res;
        int len=str.length();
        string s="";
        for(int i=0;i<len;i++){
            if(res.empty()){
                res.push(str[i]);
                continue;
            }
            if(res.top()==str[i]){
                res.pop();
            }
            else if(res.top()!=str[i]){
                res.push(str[i]);
            }
            
        }
        while(!res.empty()){
            s+=res.top();
            res.pop();
        }
        reverse(s.begin(),s.end());
        return s;
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
        string ans = obj.removePair (s);
        if(ans=="")
            cout<<"Empty String"<<endl;
        else
            cout<<ans<<endl;
    }
    
	return 0;
}  // } Driver Code Ends