// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution 
{
    public:
    //Function to find a Mother Vertex in the Graph.
    int DFS(vector<int>adj[],int s,vector<int> &visit){
        visit[s]=true;
        for(int i:adj[s]){
            if(!visit[i])DFS(adj,i,visit);
        }
        return s;
    }
	int findMotherVertex(int V, vector<int>adj[])
	{
	    // Code here
	    vector<int> visit(V,false);
	    int count=0;
	    for(int i=0;i<V;i++){
	        if(!visit[i]){
	            count=DFS(adj,i,visit);
	           
	        }
	    }
	    
	    fill(visit.begin(),visit.end(),false);
	    DFS(adj,count,visit);
	    for(int i=0;i<V;i++){
	        if(visit[i]==false)return -1;
	    }
	    return count;
	}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
		}
		Solution obj;
		int ans = obj.findMotherVertex(V, adj);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends