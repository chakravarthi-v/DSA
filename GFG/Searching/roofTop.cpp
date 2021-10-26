#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to find maximum number of consecutive steps 
    //to gain an increase in altitude with each step.
    int maxStep(int a[], int N)
    {
       //Your code here
       int count=0,maxS=0;
       for(int i=1;i<N;i++){
           if(a[i]>a[i-1]){
               count++;
               maxS=max(maxS,count);
           }
           else{
               count=0;
           }
       }
       return maxS;
    }
};

// { Driver Code Starts.


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    Solution ob;
	    cout << ob.maxStep(a, n) << endl;
	}
	return 0;
}  // } Driver Code Ends