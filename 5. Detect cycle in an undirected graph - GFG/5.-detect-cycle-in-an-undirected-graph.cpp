// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool DFS(vector<int> adj[],int s,int parent,vector<bool> visit){
        visit[s]=true;
        for(int it:adj[s]){
            if(!visit[it]){
                if(DFS(adj,it,s,visit)==true){
                    return true;    
                }
                
            }
            else if(it!=parent)return true;
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<bool> visit(V,false);
        for(int i=0;i<V;i++){
            if(!visit[i]){
                if(DFS(adj,i,-1,visit)==true)return true;
            }
        
        }
        return false;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}  // } Driver Code Ends