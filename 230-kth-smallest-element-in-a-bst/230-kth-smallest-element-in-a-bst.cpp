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
    vector<int> res;
    void InOrder(TreeNode* root){
        if(root==NULL)return ;
        InOrder(root->left);
        res.push_back(root->val);
        InOrder(root->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        InOrder(root);
        return res[k-1];
    }
};