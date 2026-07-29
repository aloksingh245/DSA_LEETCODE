class Solution {
public:
    TreeNode* build(vector<int>& nums, int left, int right) {
        // Base case: no elements left
        if (left > right)
            return nullptr;

        // Find the middle element
        int mid = left + (right - left) / 2;

        // Create the root node
        TreeNode* root = new TreeNode(nums[mid]);

        // Build the left subtree
        root->left = build(nums, left, mid - 1);

        // Build the right subtree
        root->right = build(nums, mid + 1, right);

        return root;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return build(nums, 0, nums.size() - 1);
    }
};