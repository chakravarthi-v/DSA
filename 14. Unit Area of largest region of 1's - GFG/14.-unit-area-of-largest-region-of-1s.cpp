// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find unit area of the largest region of 1s.
    int DFS(vector<vector<int>>& grid,int i,int j,int m,int n){
       if(i<0||j<0||i>=m||j>=n||grid[i][j]!=1)return 0;
       grid[i][j]=0;
       return (1+DFS(grid,i-1,j,m,n)+DFS(grid,i,j-1,m,n)+DFS(grid,i,j+1,m,n)+DFS(grid,i+1,j,m,n)+
       DFS(grid,i-1,j-1,m,n)+DFS(grid,i-1,j+1,m,n)+DFS(grid,i+1,j-1,m,n)+DFS(grid,i+1,j+1,m,n));
    }
    int findMaxArea(vector<vector<int>>& grid) {
        // Code here
        int row=grid.size(),column=grid[0].size();
        int count=INT_MIN;
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                if(grid[i][j]==1){
                    count=max(count,DFS(grid,i,j,row,column));
                }
            }
        }
        return count;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.findMaxArea(grid);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends