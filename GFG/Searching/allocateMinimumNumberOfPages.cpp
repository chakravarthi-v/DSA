// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    bool isPossible(int arr[],int n,int pages,int mid){
        int count=1,sum=0;
        for(int i=0;i<n;i++){
            if(sum+arr[i]>mid){
                sum=arr[i];
                count++;
            }
            else{
                sum+=arr[i];
            }
        
        }
        return count<=pages;
        
    }
    int findPages(int A[], int N, int M) 
    {
        //code here
        int sum=0,maxE=INT_MIN;
        for(int i=0;i<N;i++){
            sum+=A[i];
            maxE=max(maxE,A[i]);
        }
        int low=maxE,high=sum,res=0;
        while(low<=high){
            int mid=(low+high)/2;
            if(isPossible(A,N,M,mid)){
                high=mid-1;
                res=mid;
            }
            else{
                low=mid+1;
            }
        }
        return res;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}
  // } Driver Code Ends