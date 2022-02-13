/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* Util(vector<int>&  nums,int start,int end){
        if(start>end)return NULL;
        int mid=(start+end)/2;
        TreeNode *head=new TreeNode(nums[mid]);
       
        head->left=Util(nums,start,mid-1);
        head->right=Util(nums,mid+1,end);
        return head;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return Util(nums,0,nums.size()-1);
    }
};