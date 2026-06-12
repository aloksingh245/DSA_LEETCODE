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
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        pathsum(root,maxi);
        return maxi;
        
    }

    int pathsum(TreeNode*q,int &maxi){
        if(q==NULL) return 0;

        int leftsum=max(0,pathsum(q->left,maxi));
        int rightsum=max(0,pathsum(q->right,maxi));

        maxi=max(maxi, leftsum+rightsum+q->val);

        return max(leftsum,rightsum)+q->val;
        

    }
};