// Problem link - https://leetcode.com/problems/kth-largest-element-in-a-stream/

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
class Solution
{
public:
    bool fn(TreeNode *root, TreeNode *minNode, TreeNode *maxNode)
    {
        if (!root)
            return true;

        if ((!minNode || minNode->val < root->val) && (!maxNode || maxNode->val > root->val))
        {
            return fn(root->left, minNode, root) && fn(root->right, root, maxNode);
        }

        return false;
    }

    bool isValidBST(TreeNode *root)
    {
        return fn(root, NULL, NULL);
    }
};