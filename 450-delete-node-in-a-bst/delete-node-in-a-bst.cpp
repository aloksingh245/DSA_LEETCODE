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
    TreeNode* findsucc(TreeNode*root){
        while(root->left!=NULL){
            root=root->left;
        }
        return root;
    }


    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL) return NULL;

        TreeNode *delet=root;
        TreeNode *ptr=root;

        if(root->val==key) {
            //delet node;

            //case 1: noo childern means leaf node
            if(root->left==NULL && root->right==NULL){
                delete root;
                return NULL;
            }
            //case 2: have one child
            //case 2-A existing of left child
            if(root->left!=NULL && root->right==NULL){
                TreeNode *temp=root->left;
                delete root;
                return temp;
            }
            //case 2-B existing right child
            if(root->left==NULL && root->right!=NULL){
                TreeNode *temp=root->right;
                delete root;
                return temp;

            }

            //case 3  left as well as the right child are present 
            if(root->left!=NULL && root->right!=NULL){
                TreeNode* successor=findsucc(root->right);
                root->val=successor->val;

                root->right=deleteNode(root->right, successor->val);

            }
        
        };

        if(root->val<key){
            root->right=deleteNode(root->right,key);
            
        }
        if(root->val>key){
            root->left=deleteNode(root->left, key);
        }

       
        

        return root;

       
        
    }
};