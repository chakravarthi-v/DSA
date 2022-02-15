class Solution {
public:
    vector<vector<int>> res;
    void Util(vector<int> &arr,int pos,int n){
        if(pos==n){
            res.push_back(arr);
            return;
        }
        for(int i=pos;i<=n;i++){
            swap(arr[pos],arr[i]);
            Util(arr,pos+1,n);
            swap(arr[pos],arr[i]);
        }
    
    }
    vector<vector<int>> permute(vector<int>& nums) {
        Util(nums,0,nums.size()-1);
        return res;
    }
};