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
    void inorder(TreeNode* root){
        if(root==NULL){
            return;
        }

        inorder(root->left);
        ans.push_back(root->val);
        inorder(root->right);
    }
    bool findTarget(TreeNode* root, int k) {
        inorder(root);
        int n=ans.size();
        int left=0;
        int right=n-1;
        while(left<right){
            int curr_val=ans[left]+ans[right];

            if(curr_val==k) return true;

            else if(curr_val<k){
                left++;
            }
            else{
                right--;
            }
        }
        return false;
        
    }
};