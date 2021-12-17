#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    //Function to find lexicographic rank of a string.
    const int CHAR=256,mod=1000000007;
  
    long long int factorial(int n){
        return n<=1?1:(n*factorial(n-1))%mod;
    }
    
    int findRank(string S) 
    {   
        
        //Your code here
        int len=S.size(),arr[CHAR]={0};
        for(int i=0;i<len;i++){
            if(arr[S[i]]>=1){
                return 0;
            }
            else{
                arr[S[i]]++;
            }
        }
        for(int i=1;i<CHAR;i++){
            arr[i]+=arr[i-1];
        }
        int fact=factorial(len);
        long long res=1;
        for(int i=0;i<len-1;i++){
            //fact=fact/(len-i);
            
            res=res+(arr[S[i]-1]*factorial(len-i-1))%mod;
           res%=mod;
            for(int j=S[i];j<CHAR;j++){
                arr[j]--;
            }
        }
        return res%mod;
    }
};

// { Driver Code Starts.


int main()
{
    string S;
    int t;
    cin>>t;
    while(t--)
    {
     
        cin>>S;
        Solution obj;
        cout<<obj.findRank(S)<<endl;
    }
}
  // } Driver Code Ends