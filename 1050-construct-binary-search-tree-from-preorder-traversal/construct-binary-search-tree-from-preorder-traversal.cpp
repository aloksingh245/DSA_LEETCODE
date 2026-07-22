/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal/$0 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* construct(vector<int>& preorder,int &i,int upp_bound){
        if (i==preorder.size()||preorder[i]>upp_bound) return NULL;
        TreeNode* root=new TreeNode(preorder[i++]);
        root->left=construct(preorder,i,root->val);
        root->right=construct(preorder,i,upp_bound);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i=0;
        return construct(preorder,i,INT_MAX);
        
    }
};