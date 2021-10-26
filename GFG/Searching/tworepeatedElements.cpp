//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
    //Function to find two repeated elements.
    vector<int> twoRepeated (int arr[], int N) {
        // Your code here
        vector<int> res;
        for(int i=0;i<N+2;i++){
            int temp=arr[abs(arr[i])];
            if(temp<0){
                res.push_back(abs(arr[i]));
                
            }
            else{
                arr[abs(arr[i])]*=-1;
            }
            
        }
        return res;
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    cin>>t;
    
    while(t--)
    {
        cin>>n;
        
        int a[n+2];
        
        for(int i=0;i<n+2;i++)
            cin>>a[i];
        
        Solution obj;
        vector<int> res;
        res = obj.twoRepeated(a, n);
        cout<<res[0]<<" "<<res[1]<<endl;
    }
    return 0;
}
  // } Driver Code Ends