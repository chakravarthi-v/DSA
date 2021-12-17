//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
const int CHAR=256;
class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string &str) {
        // your code here
        transform(str.begin(),str.end(),str.begin(),::tolower);
       unordered_map<char,int> res;
       int len=str.length();
       for(int i=0;i<len;i++){
           if(str[i]>='a'&&str[i]<='z')
           res[str[i]]++;
       }
       if(res.size()==26)return true;
       return false;
        
    }

};

// { Driver Code Starts.

// Driver Program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--){
        string str;
        getline(cin, str);
        Solution obj;
        if (obj.checkPangram(str) == true)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return(0);
}
  // } Driver Code Ends