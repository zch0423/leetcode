/*
 * @lc app=leetcode.cn id=100 lang=cpp
 *
 * [100] 相同的树
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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // 递归
        if(p==nullptr&&q==nullptr){
            return true;
        }
        if(p==nullptr||q==nullptr){
            return false;
        }
        if(p->val!=q->val){
            return false;
        }
        return isSameTree(p->right, q->right) &&isSameTree(p->left,q->left);
    }
};
// @lc code=end

