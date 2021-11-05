#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends

class Solution
{   
    public:
    //Function to reverse the columns of a matrix.
    void reverseCol(vector<vector<int> > &matrix)
    {
        // code here
        int low=0,high=matrix[0].size()-1,siz=matrix.size();
        while(low<high){
            for(int i=0;i<siz;i++){
                swap(matrix[i][low],matrix[i][high]);
            }
            low++;
            high--;
        }
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int row, col;
        cin>> row>> col;
        vector<vector<int> > matrix(row); 
        for(int i=0; i<row; i++)
        {
            matrix[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        Solution ob;
        ob.reverseCol(matrix);

        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                cout<<matrix[i][j]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
  // } Driver Code Ends