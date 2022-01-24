// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    //Function to insert heap.
    priority_queue<int,vector<int>,greater<int>> minH;
    priority_queue<int> maxH;
    void insertHeap(int &x)
    {
        if(maxH.size()==0||x<maxH.top()){
            maxH.push(x);
        }
        else{
            minH.push(x);
        }
        balanceHeaps();
        

    }
    
    //Function to balance heaps.
    void balanceHeaps()
    {
        if(maxH.size()>minH.size()+1){
            minH.push(maxH.top());
            maxH.pop();
        }
        else if(minH.size()>maxH.size()){
            maxH.push(minH.top());
            minH.pop();
        }
    }
    
    //Function to return Median.
    double getMedian()
    {
        if(maxH.size()==minH.size()){
            return (maxH.top()+minH.top())/2.0;
        }
        else{
            return maxH.top()*1.0;
        }
    }
};


// { Driver Code Starts.

int main()
{
    int n, x;
    int t;
    cin>>t;
    while(t--)
    {
    	Solution ob;
    	cin >> n;
    	for(int i = 1;i<= n; ++i)
    	{
    		cin >> x;
    		ob.insertHeap(x);
    	    cout << floor(ob.getMedian()) << endl;
    	}
    }
	return 0;
}  // } Driver Code Ends