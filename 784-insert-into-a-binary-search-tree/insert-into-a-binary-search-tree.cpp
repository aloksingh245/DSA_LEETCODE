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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL) return new TreeNode(val);

        TreeNode *tree=root;

        while(root!=NULL){
            if(tree->val<=val){
                if(tree->right!=NULL) tree=tree->right;

                 else{
                    tree->right=new TreeNode(val);
                    break;
                 }
            
            }
            else{
                if(tree->left!=NULL) tree=tree->left;
                else{
                    tree->left = new TreeNode(val);
                    break;
                }
            }
           
        }
        return root;

        
        
    }
};