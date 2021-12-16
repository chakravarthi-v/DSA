#include <iostream>
#include<string.h>
using namespace std;
int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}
// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
     //Your code here
     int len2=x.length(),len1=s.length();
     for(int i=0;i<len1;i++){
         int j;
         for(j=0;j<len2;j++){
             if(s[i+j]!=x[j]) break;
         }
         if(j==len2) return i;
     }
     return -1;
}