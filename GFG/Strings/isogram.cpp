#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

const int CHARS=256;
class Solution
{
    public:
    //Function to check if a string is Isogram or not.
    bool isIsogram(string s)
    {
        //Your code here
        bool arr[CHARS]={false};
        int len=s.length();
        for(int i=0;i<len;i++){
            if(arr[s[i]]){
                return false;
            }
            arr[s[i]]=true;
        }
        return true;
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.isIsogram(s)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends