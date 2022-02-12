class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int first=0,second=1;
        int len=nums.size();
        while(second<len){
            if(nums[second]!=nums[first]){
                first++;
                swap(nums[first],nums[second]);
            }
            second++;
        }
        return first+1;
    }
};