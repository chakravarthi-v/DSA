class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int len=matrix[0].size();
        vector<int> arr;
        for(int i=0;i<len;i++){
            for(int j=0;j<len;j++){
                arr.push_back(matrix[i][j]);
            }
        }
        sort(arr.begin(),arr.end());
        
        return arr[k-1];
    }
};