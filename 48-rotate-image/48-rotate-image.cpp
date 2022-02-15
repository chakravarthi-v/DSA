class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row=matrix[0].size(),col=matrix.size();
        for(int i=0;i<col;i++){
            for(int j=0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        int low=0,high=row-1;
        while(low<high){
            for(int i=0;i<col;i++){
                swap(matrix[i][low],matrix[i][high]);
            }
            low++;
            high--;
        }
    }
};