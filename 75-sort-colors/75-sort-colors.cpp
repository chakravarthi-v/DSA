class Solution {
public:
    void sortColors(vector<int>& nums) {
        int start=-1,low=0,high=nums.size()-1;
        while(low<=high){
            if(nums[low]==1){
                low++;
            }
            else if(nums[low]==0){
                start++;
                swap(nums[low],nums[start]);
                low++;
            }
            else if(nums[low]==2){
                swap(nums[low],nums[high]);
                high--;
            }
        }
            
    }
};