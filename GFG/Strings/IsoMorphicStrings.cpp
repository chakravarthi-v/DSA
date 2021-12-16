// C++ program to check if two strings are isomorphic
#include<iostream>
#include<string.h>

using namespace std;
#define MAX_CHARS 256

 // } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        int arr1[256]={0},arr2[256]={0};
        int len1=str1.length(),len2=str2.length();
        if(len1!=len2) return false;
        for(int i=0;i<len1;i++){
            arr1[str1[i]]++;
            arr2[str2[i]]++;
        }
        for(int i=0;i<len1;i++){
            if(arr1[str1[i]]!=arr2[str2[i]]) return false; 
        }
        return true;
        // Your code here
        
    }
};

// { Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}  // } Driver Code Ends