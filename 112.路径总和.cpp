/*
 * @lc app=leetcode.cn id=112 lang=cpp
 *
 * [112] 路径总和
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
    bool hasPathSum(TreeNode* root, int sum) {
        // dfs 题目说从根节点到叶节点
        if(root==nullptr){
            return false;
        }
        sum -= root->val;
        if(root->left==nullptr&&root->right==nullptr){
            return sum==0;
        }
        return hasPathSum(root->left, sum)||hasPathSum(root->right, sum);

    }
};
// @lc code=end

