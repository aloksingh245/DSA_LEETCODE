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
    struct info{
        bool isBst;
        int mini;
        int maxi;
        int sum;
    };
    int ans=0;
    info check(TreeNode*root){
        if (root==NULL) return{true,INT_MAX,INT_MIN,0};

        info left=check(root->left);
        info right=check(root->right);

        if(left.isBst && right.isBst && left.maxi<root->val && right.mini>root->val){
            int curr=left.sum+right.sum+root->val;

            ans=max(curr,ans);
            return{
                true,
                min(left.mini,root->val),
                max(right.maxi,root->val),
                curr,
            };
        }
        return {false,0,0,0};
    }
    int maxSumBST(TreeNode* root) {
        check(root);
        return ans;
        
    }
};