#
# @lc app=leetcode.cn id=94 lang=python3
#
# [94] 二叉树的中序遍历
#

# @lc code=start
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def inorderTraversal(self, root: TreeNode) -> List[int]:
        output = []
        self.helper(root, output)
        return output
    
    def helper(self, node, output):
        if not node:
            return 
        if node.left:
            self.helper(node.left, output)
        output.append(node.val)
        if node.right:
            self.helper(node.right, output)

# @lc code=end

