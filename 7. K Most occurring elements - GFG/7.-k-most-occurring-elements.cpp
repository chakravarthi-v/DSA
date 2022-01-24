// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
// Function to print the k numbers with most occurrences 

class Solution
{
    public:
    //Function to return the sum of frequencies of k numbers
    //with most occurrences in an array.
    int kMostFrequent(int arr[], int n, int k) 
    { 
    	// Your code here	
    	priority_queue<pair<int,int>> pq;
    	unordered_map<int,int> res;
    	for(int i=0;i<n;i++){
    	    res[arr[i]]++;
    	}
    	for(auto x:res){
    	    pq.push({x.second,x.first});
    	}
    	int count=0;
    	for(int i=0;i<k;i++){
    	    count+=pq.top().first;
    	    pq.pop();
    	}
    	return count;
    } 
};

// { Driver Code Starts.
// Driver program to test above 
int main() 
{
	int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        cin >> k;
        Solution ob;
        cout << ob.kMostFrequent(arr, n, k) << endl; 
    }

	return 0; 
} 
  // } Driver Code Ends