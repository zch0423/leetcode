#
# @lc app=leetcode.cn id=145 lang=python3
#
# [145] 二叉树的后序遍历
#

# @lc code=start
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

def helper(node, output):
    if node is None:
        return
    helper(node.left, output)
    helper(node.right, output)
    output.append(node.val)
class Solution:
    def postorderTraversal(self, root: TreeNode) -> List[int]:
        output = []
        helper(root, output)
        return output
# @lc code=end

