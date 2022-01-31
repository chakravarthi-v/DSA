// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


 // } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    static bool comp(pair<int,int> &a,pair<int,int> &b){
        double r1=(double) a.first/a.second;
        double r2=(double) b.first/b.second;
        return r1>r2;
    }
    double fractionalKnapsack(int weight, Item arr[], int n)
    {
        // Your code here
        vector<pair<int,int>> res;
        for(int i=0;i<n;i++){
            res.push_back({arr[i].value,arr[i].weight});
        }
        sort(res.begin(),res.end(),comp);
        double value=0;
        for(int i=0;i<n;i++){
            if(res[i].second<weight){
                weight-=res[i].second;
                value+=(double)res[i].first;
            }
            else{
                value+=(double) (res[i].first* (double)weight/res[i].second);
                break;
            }
        }
        return value;
        
    }
        
};


// { Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}  // } Driver Code Ends