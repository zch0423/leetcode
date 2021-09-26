#
# @lc app=leetcode.cn id=404 lang=python3
#
# [404] 左叶子之和
#

# @lc code=start
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sumOfLeftLeaves(self, root: TreeNode) -> int:
        return self.helper(root)
            
    
    def helper(self, node):
        temp = 0
        if node.left:
            if node.left.left is None and node.left.right is None:
                temp += node.left.val
            else:
                temp += self.helper(node.left)
        if node.right:
            temp += self.helper(node.right)
        return temp

# @lc code=end

