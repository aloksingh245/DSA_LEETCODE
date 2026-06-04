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
    int ans=0; 
    int height(TreeNode* q){
            if(q==NULL){
                return 0;
            }
            int leftside=height(q->left);
            int rightside=height(q->right);
            int height=max(leftside,rightside)+1;
            ans=max(ans,leftside+rightside);
            return height;
        }


    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return ans;
        
        
        
    }
};