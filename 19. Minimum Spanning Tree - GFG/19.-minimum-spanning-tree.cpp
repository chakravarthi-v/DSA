// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        int res=0;
        int dist[V];
        fill(dist,dist+V,INT_MAX);
        bool visit[V]={false};
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        dist[0]=0;
        pq.push({dist[0],0});
        while(!pq.empty()){
            int u=pq.top().second;
            pq.pop();
            visit[u]=true;
            for(auto x:adj[u]){
                int v=x[0],w=x[1];
                if(!visit[v]&&dist[v]>w){
                    dist[v]=w;
                    pq.push({dist[v],v});
                }
            }
        }
        for(int i=0;i<V;i++){
            res+=dist[i];
        }
        return res;
        
    }
};

// { Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}

  // } Driver Code Ends