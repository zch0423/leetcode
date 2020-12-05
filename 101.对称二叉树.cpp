/*
 * @lc app=leetcode.cn id=101 lang=cpp
 *
 * [101] 对称二叉树
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
    bool isSymmetric(TreeNode* root) {
        // 递归
        return isMirror(root, root);
        
    }
    bool isMirror(TreeNode* left, TreeNode* right){
        if(left==nullptr&&right==nullptr){
            return true;
        }
        if(left==nullptr||right==nullptr){
            return false;
        }
        if(left->val!=right->val){
            return false;
        }
        return isMirror(left->left, right->right)&&isMirror(left->right, right->left);
    }
};
// @lc code=end

