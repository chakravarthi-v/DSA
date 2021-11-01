#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
   
    long long mergeSort(long long arr[],long long low,long long mid,long long high){
        long long n1=mid-low+1,n2=high-mid;
        long long arr1[n1],arr2[n2];
        for(int i=0;i<n1;i++){
            arr1[i]=arr[i+low];
        }
        for(int i=0;i<n2;i++){
            arr2[i]=arr[mid+i+1];
        }
        long long i=0,j=0,res=0,index=low;
        while(i<n1&&j<n2){
            if(arr1[i]<=arr2[j]){
                arr[index++]=arr1[i++];
            }
            else{
                arr[index++]=arr2[j++];
                res+=(n1-i);
            }
        }
        while(i<n1){
            arr[index++]=arr1[i++];
        }
        while(j<n2){
            arr[index++]=arr2[j++];
        }
        return res;
    }
    long long inverse(long long arr[], long long low,long long high){
        long long res=0;
       if(low<high){
            long long mid=(low+high)/2;
            res+=inverse(arr,low,mid);
            res+=inverse(arr,mid+1,high);
            res+=mergeSort(arr,low,mid,high);
        }
        return res;
    }
    long long int inversionCount(long long arr[], long long N){
        // Your Code Here
        long long low=0,high=N-1,res=0;
        res=inverse(arr,low,high);
        return res;
        
        
    }

};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends