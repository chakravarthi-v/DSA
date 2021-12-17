#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

const int CHAR=256;
class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string s)
    {
       //Your code here
       int arr[256],len=s.length();
       fill(arr,arr+CHAR,-1);
       for(int j=0;j<len;j++){
           if(arr[s[j]]==-1){
               arr[s[j]]=j;
           }
           else if(arr[s[j]]>=0){
               arr[s[j]]=-2;
           }
           
       }
       int res=INT_MAX;
       for(int i=0;i<CHAR;i++){
           if(arr[i]>=0){res=min(res,arr[i]);}
       }
       return res==INT_MAX?'$':s[res];
    }

};

// { Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--)
	{
	
	    string S;
	    cin >> S;
	    Solution obj;
        char ans = obj.nonrepeatingCharacter(S);
        
        if(ans != '$')
	    cout << ans;
        else cout << "-1";
            
        cout << endl;
	    
	}
	
	return 0;
}
  // } Driver Code Ends