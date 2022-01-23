// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to return k largest elements from an array.
    vector<int> kLargest(int arr[], int n, int k)
    {
        // code here
    vector<int> res;
      priority_queue <int,vector<int>,greater<int>> minHeap;
	for(int i = 0; i < k; i++)
	{
		minHeap.push(arr[i]);
	}
	for(int i = k; i < n; i++)
	{
		if (minHeap.top() > arr[i])
			continue;
		else
		{
			minHeap.pop();
			minHeap.push(arr[i]);
		}
	}
	
	while(minHeap.empty()==false){
	    res.insert(res.begin(),minHeap.top());
	    minHeap.pop();
	}
	return res;
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
        for(int i = 0; i < n;i++)
            cin>>arr[i];
        Solution ob;
        vector<int> result = ob.kLargest(arr, n, k);
        for (int i = 0; i < result.size(); ++i)
            cout<<result[i]<<" ";
        cout << endl;
        
    }
    return 0;
}
  // } Driver Code Ends