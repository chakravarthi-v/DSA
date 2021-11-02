#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to find the kth smallest element in the array.
    int lomuto(int arr[],int low,int high){
        int piv=arr[high];
        int l=low-1;
        for(int i=low;i<high;i++){
            if(arr[i]<piv){
                l++;
                swap(arr[i],arr[l]);
            }
        }
        swap(arr[l+1],arr[high]);
        return l+1;
    }
    int kthSmallest(int arr[], int n, int k)
    {
        // Your code here
        int low=0,high=n-1;
        while(low<=high){
            int piv=lomuto(arr,low,high);
            if(piv==(k-1)){
                return arr[piv];
            }
            else if(piv>(k-1)){
                high=piv-1;
            }
            else{
                low=piv+1;
            }
        }
    }
};


// { Driver Code Starts.
int main(){
	
	int t;
	cin >> t;
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    int arr[n];
	    
	    for(int i = 0; i<n; ++i)
	        cin>>arr[i];
	        
	    Solution ob;
	    cout << ob.kthSmallest(arr, n, k) << endl;
	    
	}
	return 0;
}  // } Driver Code Ends