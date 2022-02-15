class Solution {
public:
    vector<vector<int>> res;
    void Util(vector<int> arr,vector<int>& nums,int pos,int size){
        if(pos==size){
            res.push_back(arr);
            return ;
        }
        Util(arr,nums,pos+1,size);
        arr.push_back(nums[pos]);
        Util(arr,nums,pos+1,size);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> arr;
        Util(arr,nums,0,nums.size());
        return res;
    }
};