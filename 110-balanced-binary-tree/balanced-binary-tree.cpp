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
    int Balanced(TreeNode* root) {
        if(root==NULL) return 0;
        int leftside=Balanced(root->left);
        if(leftside==-1) return -1;
        int rightside=Balanced(root->right);
        if(rightside==-1) return -1;
        
        if(abs(leftside-rightside)>1) return -1;

        return max(leftside , rightside)+1;
        
    }

     bool isBalanced(TreeNode* root) {
        return Balanced(root) !=-1;

     }
};