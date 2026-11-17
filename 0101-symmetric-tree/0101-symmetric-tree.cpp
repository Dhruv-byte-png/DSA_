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

    bool isSymmetricTest(TreeNode* l, TreeNode* r){

        if(l == NULL && r == NULL) return true;

        else if(l == NULL || r == NULL) return false;

        else if(l->val != r->val) return false;

        return isSymmetricTest(l->left, r->right) && isSymmetricTest(l->right, r->left);
    }

    bool isSymmetric(TreeNode* root) {
        if(root == NULL) return true;

        return isSymmetricTest(root->left, root->right);
    }
};