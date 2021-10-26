// A C++ program to print elements with count more than n/k

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
        // Your code here
        int maxE=*max_element(arr,arr+n);
        int ars[maxE+2]={0};
        for(int i=0;i<n;i++){
            ars[arr[i]]++;
        }
        int count=0;
        for(int i=0;i<maxE+2;i++){
            if(ars[i]>(n/k)){
                count++;
            }
        }
        return count;
    }
};


// { Driver Code Starts.
int main() {
    int t, k;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;

        int arr[n];

        for (i = 0; i < n; i++) cin >> arr[i];
        cin >> k;
        Solution obj;
        cout << obj.countOccurence(arr, n, k) << endl;
    }
    return 0;
}
  // } Driver Code Ends