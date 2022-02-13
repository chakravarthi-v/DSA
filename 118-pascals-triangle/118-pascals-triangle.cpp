class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        if(numRows>=1){
            vector<int> temp(1,1);
          
            res.push_back(temp);
        }
        if(numRows>=2){
            vector<int> temp(2,1);
            res.push_back(temp);
        }
        for(int i=3;i<=numRows;i++){
            vector<int> temp(i,1);
            for(int j=1;j<i-1;j++){
                temp[j]=res[i-2][j]+res[i-2][j-1];
            }
            res.push_back(temp);
        }
        return res;
        
    }
};