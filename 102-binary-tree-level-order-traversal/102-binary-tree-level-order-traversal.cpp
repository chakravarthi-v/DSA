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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> vc;
        if(root==NULL) return vc;
        queue<TreeNode*> q;
        
        q.push(root);
        while(!q.empty()){
            int siz=q.size();
            vector<int>res;
            for(int i=0;i<siz;i++){
                auto it=q.front();
                res.push_back(it->val);
                q.pop();
                if(it->left)q.push(it->left);
                if(it->right)q.push(it->right);
            }
            vc.push_back(res);
            
        }
        return vc;
    }
};