/*
 * @lc app=leetcode.cn id=104 lang=cpp
 *
 * [104] 二叉树的最大深度
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
    int maxDepth(TreeNode* root) {
        // 递归
        if(root==nullptr){
            return 0;
        }else{
            int tmp = 0;
            int tmp2 = 0;
            tmp = 1+maxDepth(root->left);
            tmp2 = 1+maxDepth(root->right);
            return tmp>tmp2?tmp:tmp2;
        }
    }
};
// @lc code=end

