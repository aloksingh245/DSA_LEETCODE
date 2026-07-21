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
    vector<int>ans;
    int inorder(TreeNode*root) {
        if(root==NULL){
            return 0;
        }
        inorder(root->left);
        
        ans.push_back(root->val);

        inorder(root->right);
        
        int n=ans.size();

        return 0;
        
    }
    int kthSmallest(TreeNode* root, int k) {
        inorder(root);
        return ans[k-1];
    }
};