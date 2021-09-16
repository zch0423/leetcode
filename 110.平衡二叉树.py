#
# @lc app=leetcode.cn id=110 lang=python3
#
# [110] 平衡二叉树
#

# @lc code=start
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def isBalanced(self, root: TreeNode) -> bool:
        # 自底向上递归 不平衡返回-1
        def height(r: TreeNode)->int:
            if r is None:
                return 0
            leftHeight = height(r.left)
            if leftHeight == -1:
                return -1
            rightHeight = height(r.right)
            if rightHeight == -1:
                return -1
            if abs(rightHeight - leftHeight)>1:
                return -1
            return max(leftHeight, rightHeight) +1
        return height(root)>=0

        
    
        

# @lc code=end

