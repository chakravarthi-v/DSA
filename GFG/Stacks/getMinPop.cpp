//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;

stack<int> _push(int arr[],int n);

void _getMinAtPop(stack<int>s);

 // } Driver Code Ends
//User function Template for C++


//Function to push all the elements into the stack.
stack<int> _push(int arr[],int n)
{
   // your code here
   stack<int> res;
   int min=arr[0];
   for(int i=0;i<n;i++){
       if(arr[i]<=min){
           res.push(arr[i]-min);
           min=arr[i];
       }
       else{
            res.push(arr[i]);
       }
   }
   res.push(min);
   return res;
}

//Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int>s)
{
    // your code here
    int min=s.top();
    s.pop();
    while(!s.empty()){
        if(s.top()<0){
            cout<<min<<" ";
            min=min-s.top();
        }
        else{
            cout<<min<<" ";
        }
        s.pop();
    }
}

// { Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    stack<int>mys=_push(arr,n);
	    _getMinAtPop(mys);
	    
	    cout<<endl;
	    
	}
	return 0;
}

  // } Driver Code Ends