// C++ program for Naive Pattern 
// Searching algorithm 
#include<bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends


class Solution
{
    public:
    //Function to check if the given pattern exists in the given string or not.
    bool search(string pat, string txt) 
    { 
    	// Your code here
    	int len1=pat.length(),len2=txt.length();
    	for(int i=0;i<=len2-len1;){
    	    int j;
    	    for(j=0;j<len1;j++){
    	        if(pat[j]!=txt[i+j])break;
    	    }
    	    if(j==len1) return true;
    	    j==0?i++:i+=j;
    	}
    	return false;
    } 
};




// { Driver Code Starts.

// Driver Code 
int main() 
{ 
	
	int t;
	cin >> t;
	
	while(t--){
	    string s, p;
	    cin >> s >> p;
	    Solution obj;
	    if(obj.search(p, s)) cout << "Yes"; else cout << "No"; cout << endl;
	}
	
	return 0; 
}  // } Driver Code Ends