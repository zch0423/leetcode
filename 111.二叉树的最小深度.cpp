/*
 * @lc app=leetcode.cn id=111 lang=cpp
 *
 * [111] 二叉树的最小深度
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int minDepth(TreeNode* root) {
        // recursion
        if(root==nullptr){
            return 0;
        }
        if(root->left==nullptr&&root->right==nullptr){
            return 1;
        }else if(root->left==nullptr){
            return 1+minDepth(root->right);
        }else if(root->right==nullptr){
            return 1+minDepth(root->left);
        }else{
            return min(1+minDepth(root->left),1+minDepth(root->right));
        }
    }
};
// @lc code=end

