#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    int kadane(int arr[],int num){
        int maxS=arr[0],diff=arr[0];
        for(int i=1;i<num;i++){
            diff=max(arr[i],diff+arr[i]);
            maxS=max(diff,maxS);
        }
        return maxS;
    }
    int circularSubarraySum(int arr[], int num){
        
        // your code here
        int normalSum=kadane(arr,num);
        if(normalSum<0){
            return normalSum; 
        }
        int sum=0;
        for(int i=0;i<num;i++){
            sum+=arr[i];
            arr[i]=-arr[i];
        }
        int circ=sum+kadane(arr,num);
        return max(circ,normalSum);
    }
};

// { Driver Code Starts.

int main()
 {
	int T;
	
	//testcases
	cin>> T;
	
	while (T--)
	{
	    int num;
	    
	    //size of array
	    cin>>num;
	    int arr[num];
	    
	    //inserting elements
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	        
	    Solution ob;
	    //calling function
	    cout << ob.circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends