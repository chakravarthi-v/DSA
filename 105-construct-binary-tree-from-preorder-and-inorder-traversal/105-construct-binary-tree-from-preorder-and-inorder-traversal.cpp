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
    int index=0;
    TreeNode* util(vector<int>& preorder, vector<int>& inorder,int start,int end){
        if(start>end)return NULL;
        TreeNode *head=new TreeNode(preorder[index]);
        int mid=0;
        for(int i=0;i<inorder.size();i++){
            if(preorder[index]==inorder[i]){
                mid=i;
                break;
            }
        }
        index++;
        head->left=util(preorder,inorder,start,mid-1);
        head->right=util(preorder,inorder,mid+1,end);
        return head;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int len=preorder.size();
        return util(preorder,inorder,0,len-1);
    }
};