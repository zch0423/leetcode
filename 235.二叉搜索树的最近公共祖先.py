#
# @lc app=leetcode.cn id=235 lang=python3
#
# [235] 二叉搜索树的最近公共祖先
#

# @lc code=start
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def lowestCommonAncestor(self, root: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode':
        ancestor = root
        while True:
            if p.val < ancestor.val and q.val< ancestor.val:
                ancestor = ancestor.left
            elif p.val > ancestor.val and q.val> ancestor.val:
                ancestor = ancestor.right
            else:
                break
        return ancestor

# @lc code=end

