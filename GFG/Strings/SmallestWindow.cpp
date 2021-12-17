#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    string smallestWindow (string s, string p)
    {
        // Your code here
       int arr[256]={0},start=0,count=0,ans=INT_MAX,i=0;
       for(int i=0;i<p.length();i++){
           if(arr[p[i]]==0)count++;
           arr[p[i]]++;
       }
       int j=0;
       while(j<s.length()){
           arr[s[j]]--;
           if(arr[s[j]]==0) count--;
           if(count==0){
                while(count==0){
                    if(ans>j-i+1){
                        ans=min(ans,j-i+1);
                        start=i;
                    }
                    arr[s[i]]++;
                    if(arr[s[i]]>0)count++;
                    i++;
                }   
           }
           j++;
       }
       if(ans==INT_MAX) return "-1";
       return s.substr(start,ans);
       
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
        string pat;
        cin>>pat;
        Solution obj;
        cout<<obj.smallestWindow(s, pat)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends