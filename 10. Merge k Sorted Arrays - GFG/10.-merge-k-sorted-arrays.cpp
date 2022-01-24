// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
#define N 105
using namespace std;
void printArray(vector<int> arr, int size)
{
for (int i=0; i < size; i++)
	cout << arr[i] << " ";
}


 // } Driver Code Ends
//User function Template for C++

class Triplet{
    public:
    int ele,arP,arI;
    Triplet(int a,int b,int c){
        ele=a;
        arP=b;
        arI=c;
    }
};
class Comp{
    public:
    bool operator()(Triplet &a,Triplet &b){
        return a.ele>b.ele;
    }
};
class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        //code here
        vector<int> res;
        priority_queue<Triplet,vector<Triplet>,Comp> pq;
        for(int i=0;i<K;i++){
            pq.push(Triplet(arr[i][0],i,0));
        }
        while(!pq.empty()){
            Triplet temp=pq.top();
            pq.pop();
            res.push_back(temp.ele);
            int index=temp.arI,array=temp.arP;
            if(index+1<K){
                pq.push(Triplet(arr[array][index+1],array,index+1));
            }
        }
        return res;
        
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--){
	    int k;
	    cin>>k;
	    vector<vector<int>> arr(N, vector<int> (N, 0));
	    for(int i=0; i<k; i++){
	        for(int j=0; j<k; j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	    Solution obj;
    	vector<int> output = obj.mergeKArrays(arr, k);
    	printArray(output, k*k);
    	cout<<endl;
    }
	return 0;
}





  // } Driver Code Ends