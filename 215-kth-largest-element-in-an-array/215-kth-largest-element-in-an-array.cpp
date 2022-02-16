class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> st(nums.begin(),nums.end());
        while(k>1){
            st.pop();
            k--;
        }
        return st.top();
    }
};