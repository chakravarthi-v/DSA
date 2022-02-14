class Solution {
public:
    int maxArea(vector<int>& height) {
        int low=0,end=height.size()-1;
        int amt=INT_MIN;
        while(low<end){
            int minE=min(height[low],height[end]);
           
            amt=max(amt,minE*(end-low));
            if(height[low]<=height[end])low++;
            else end--;
        }
        return amt;
    }
};