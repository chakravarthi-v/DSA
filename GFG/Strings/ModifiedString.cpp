#include<bits/stdc++.h>
#define br char xx; cin>>xx; cout<<xx<<endl;
#define lli long long int
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of characters which Ishaan must insert  
    //such that string doesn't have three consecutive same characters.
    int modified (string a)
    {
        // Your code here
        int len=a.size(),result=0,val=a[0],count=1;
        for(int i=1;i<len;i++){
            
            if(a[i]!=val){
                val=a[i];
                count=1;
                continue;
            }
            else if(a[i]==val){
                count++;
            }
            if(count==3){
                result++;
                val=a[i];
                count=1;
            }
            
            
        }
        return result;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    string a;
    while(t--){
        cin>>a;
        Solution obj;
        cout<<obj.modified(a)<<endl;
    }
    return 0;
}
  // } Driver Code Ends