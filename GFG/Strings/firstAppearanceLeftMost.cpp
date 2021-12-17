//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

//User function Template for C++
const int CHAR=256;
class Solution
{
    public:
    //Function to find repeated character whose first appearance is leftmost.
    int repeatedCharacter (string s) 
    { 
        //Your code here
        bool arr[CHAR]={false};
        int len=s.length();
        int res=-1;
        for(int i=len-1;i>=0;i--){
            if(arr[s[i]]==true){
                res=i;
            }
            else{
                arr[s[i]]=true;
            }
        }
        return res;
    } 
};

// { Driver Code Starts.


int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    string s;
	    cin>>s;
	    Solution obj;
	    int index = obj.repeatedCharacter(s); 
        if (index == -1) 
            cout<<-1<<endl;
        else
            cout<<s[index]<<endl;
	}
	return 0;
}
  // } Driver Code Ends