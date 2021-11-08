#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends

class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        unordered_map<string,int> res;
     
        for(int i=0;i<n;i++){
            res[arr[i]]++;
        }
        string s="";
        int max=-1;
        for(auto i=res.begin();i!=res.end();i++){
            if(i->second>max){
                max=i->second;
                s=i->first;
            }
            if(i->second==max&&s.compare(i->first)>0){
                s=i->first;
            }
        }
        vector<string> result={s,to_string(max)};
        return result;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}
  // } Driver Code Ends