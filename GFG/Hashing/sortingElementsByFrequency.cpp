#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution{
    public:
    //Complete this function
    //Function to sort the array according to frequency of elements.
    bool compare(pair<int,int>& a,pair<int,int>& b){
        if(a.second==b.second){
            return (a.first<b.first);
          
        }
        
              return (a.second>b.second);
        
    }
    vector<int> sortByFreq(int arr[],int n)
    {
        //Your code here
        unordered_map<int,int> res;
        for(int i=0;i<n;i++){
            res[arr[i]]++;
        }
        vector<pair<int,int>> sortF;
        copy(res.begin(), res.end(), back_inserter(sortF));
        sort(sortF.begin(),sortF.end(),[this](pair<int,int>& a,pair<int,int>& b){
            return compare(a,b);
        });
        vector<int> final;
        for (int i = 0; i < sortF.size(); i++) {
      while(sortF[i].second--)
      {
              final.push_back(sortF[i].first);
      }
        }
        return final;
        
    }
};

// { Driver Code Starts.

int main() {
	
	
	int t;
	cin >> t;
	
	
	while(t--){
	    
	    
	    int n;
	    cin >> n;
	    
	    int a[n+1];
	    
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution obj;
	    vector<int> v;
	    v = obj.sortByFreq(a,n);
	    for(int i:v)
	        cout<<i<<" ";
	    cout << endl;
	}
	
	return 0;
}

  // } Driver Code Ends