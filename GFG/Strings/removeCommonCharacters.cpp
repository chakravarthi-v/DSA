#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends

const int CHAR=256;
class Solution
{
    public:
    //Function to remove common characters and concatenate two strings.
    string concatenatedString(string s1, string s2) 
    { 
        // Your code here
        int len1=s1.length(),len2=s2.length();
      
        string s;
        for(int i=0;i<len1;i++){
            if(s2.find(s1[i])==string::npos) s+=s1[i];
        }
        for(int i=0;i<len2;i++){
            if(s1.find(s2[i])==string::npos) s+=s2[i];
        }
        
        if(s.empty()){s+="-1";
        
        };
        return s;
    }

};

// { Driver Code Starts.

/* Driver program to test above function */
int main() 
{ 
	int t;
	cin >> t;
	
	while(t--){
    	string s1, s2;
    	cin >> s1 >> s2;
    	Solution obj;
    	string res = obj.concatenatedString(s1, s2);
    	cout<<res<<endl;
	}
	return 0; 
}
  // } Driver Code Ends