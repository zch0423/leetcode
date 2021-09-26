#
# @lc app=leetcode.cn id=144 lang=python3
#
# [144] 二叉树的前序遍历
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
    output.append(node.val)
    helper(node.left, output)
    helper(node.right, output)

class Solution:
    def preorderTraversal(self, root: TreeNode) -> List[int]:
        output = []
        helper(root, output)
        return output

# @lc code=end

