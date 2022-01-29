// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
	public:
	//Function to find the level of node X.
	int nodeLevel(int V, vector<int> adj[], int X) 
	{
	    // code here
	    queue<int> q;
	    vector<bool> visit(V,false);
	    q.push(0);
	    visit[0]=true;
	    int level=-1;
	    while(!q.empty()){
	        level++;
	        int s=q.size();
	        for(int i=0;i<s;i++){
	            int p=q.front();
	            if(p==X)return level;
	            visit[p]=true;
	            q.pop();
	            for(int x:adj[p]){
	                if(!visit[x])q.push(x);
	            }
	        }
	        
	    }
	    return -1;
	}
};

// { Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E, X;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    		adj[v].push_back(u);
    	}
    	cin>>X;

    	Solution obj;
    	cout << obj.nodeLevel(V, adj, X) << "\n";
    }

    return 0;
}

  // } Driver Code Ends