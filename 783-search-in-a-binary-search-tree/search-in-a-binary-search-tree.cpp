class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {

        if (root == NULL)
            return NULL;

        // Value found
        if (root->val == val)
            return root;

        // Search left subtree
        if (val < root->val)
            return searchBST(root->left, val);

        // Search right subtree
        return searchBST(root->right, val);
    }
};