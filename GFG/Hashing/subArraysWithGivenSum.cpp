#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to count the number of subarrays which adds to the given sum.
    int subArraySum(int arr[], int n, int sum)
    {
        //Your code here
        unordered_map<int,int> res;
        int preSum=0,count=0;
        for(int i=0;i<n;i++){
            preSum+=arr[i];
            if(preSum==sum){
                count++;
            }
            if(res.find(preSum-sum)!=res.end()){
                count+=res[preSum-sum];
            }
            res[preSum]++;
        }
        return count;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,sum=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cin>>sum;
	    Solution obj;
	    cout<<obj.subArraySum(arr, n, sum)<<endl;
	}
	return 0;
}  // } Driver Code Ends