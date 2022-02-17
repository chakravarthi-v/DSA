class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int low=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[++low]=nums[i];
            }
        }
        for(int j=low+1;j<nums.size();j++){
            nums[j]=0;
        }
        
    }
};