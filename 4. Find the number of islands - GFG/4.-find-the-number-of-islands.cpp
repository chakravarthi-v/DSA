// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    void DFS(vector<vector<char>> &grid,int i,int j,int m,int n){
        if(i<0||j<0||i>=m||j>=n||grid[i][j]!='1'){
           return ;  
        }
            grid[i][j]='2';
            DFS(grid,i+1,j,m,n);
            DFS(grid,i-1,j,m,n);
            DFS(grid,i,j-1,m,n);
            DFS(grid,i,j+1,m,n);
            DFS(grid,i+1,j+1,m,n);
            DFS(grid,i-1,j-1,m,n);
            DFS(grid,i+1,j-1,m,n);
            DFS(grid,i-1,j+1,m,n);
    }
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int row=grid.size(),column=grid[0].size();
        
        int count=0;
        
        if(row==0)return 0;
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                if(grid[i][j]=='1'){
                    count++;
                    DFS(grid,i,j,row,column);
                    
                }
            }
        }
        return count;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}  // } Driver Code Ends