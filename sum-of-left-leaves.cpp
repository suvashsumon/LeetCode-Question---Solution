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
    int getSum(TreeNode* croot, string type)
    {
        if(croot==NULL) return 0;
        if(type=="left" && croot->left==NULL && croot->right==NULL) return croot->val;
        return getSum(croot->left, "left") + getSum(croot->right, "right");
    }
    int sumOfLeftLeaves(TreeNode* root) {
        return getSum(root->left, "left") + getSum(root->right, "right");
    }
};
