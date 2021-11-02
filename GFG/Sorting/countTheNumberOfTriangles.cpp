#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to count the number of possible triangles.
    int findNumberOfTriangles(int arr[], int n)
    {
        // code here
        
        sort(arr,arr+n);
        int res=0;
        for(int i=n-1;i>=2;i--){
            int a=0,b=i-1;
            while(a<b){
                if(arr[a]+arr[b]>arr[i]){
                    res+=b-a;
                    b--;
                }
                else{
                    a++;
                }
                
            }
        }
        return res;
    }
};


// { Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.findNumberOfTriangles(arr,n) <<endl;
    }
    return 0;
}  // } Driver Code Ends