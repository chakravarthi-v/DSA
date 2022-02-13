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
    
    bool isSymmetric(TreeNode* root) {
        queue<TreeNode*> q1,q2;
        q1.push(root->left);
        q2.push(root->right);
        while(!q1.empty() && !q2.empty()){
            auto it=q1.front(),it2=q2.front();
            q1.pop();
            q2.pop();
            if(it==NULL&&it2==NULL)continue;
            if(it==NULL||it2==NULL)return false;
            if(it->val!=it2->val)return false;
            else{
                q1.push(it->left);
                q1.push(it->right);
                q2.push(it2->right);
                q2.push(it2->left);
            }
        }
        return true;
    }
};