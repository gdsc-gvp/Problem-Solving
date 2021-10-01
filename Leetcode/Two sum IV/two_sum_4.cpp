// Problem link - https://leetcode.com/problems/two-sum-iv-input-is-a-bst/

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
    bool fn(TreeNode* root, int k, unordered_set<int> &uniq){
        if(!root) return false;
        if(uniq.count(k-root->val)) return true;
        uniq.insert(root->val);
        return fn(root->left, k, uniq) || fn(root->right, k, uniq);
    }
    
    bool findTarget(TreeNode* root, int k) {
        unordered_set<int> uniq;
        return fn(root, k, uniq);
    }
};

