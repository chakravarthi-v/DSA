#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


const int CHAR=256;
class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        int arr[256]={0},len=str.length();
        for(int i=0;i<len;i++){
            arr[str[i]]++;
        }
        int res=0;
        char result;
        for(int i=0;i<len;i++){
            if(arr[str[i]]>res){
                res=arr[str[i]];
                result=str[i];
                
            }
            else if(arr[str[i]]==res&&result>str[i]){
                result=str[i];
            }
        }
        return result;
    }

};

// { Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}  // } Driver Code Ends