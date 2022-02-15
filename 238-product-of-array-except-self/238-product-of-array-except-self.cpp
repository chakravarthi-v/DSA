class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len=nums.size();
        vector<int> res(len,0);
        res[len-1]=1;
        for(int i=len-2;i>=0;i--){
            res[i]=(nums[i+1]*res[i+1]);
        }
        int left=1;
        for(int i=0;i<len;i++){
            res[i]=res[i]*left;
            left=left*nums[i];
        }
        return res;
    }
};