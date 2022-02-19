class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int count=0,len=nums.size();
        for(int i=0;i<len;i++){
           count=count^nums[i]^i; 
        }
        return count^len;
    }
};