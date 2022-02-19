class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rowL=matrix[0].size();
        int colL=matrix.size();
        vector<int> row(rowL,1),col(colL,1);
        for(int i=0;i<colL;i++){
            for(int j=0;j<rowL;j++){
                if(matrix[i][j]==0){
                    row[j]=0;
                    col[i]=0;
                }
            }
        }
        for(int i=0;i<colL;i++){
            for(int j=0;j<rowL;j++){
                if(row[j]==0||col[i]==0){
                    matrix[i][j]=0;
                }
            }
        }
    }
};