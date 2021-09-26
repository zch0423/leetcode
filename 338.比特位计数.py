#
# @lc app=leetcode.cn id=338 lang=python3
#
# [338] 比特位计数
#

# @lc code=start
class Solution:
    def countBits(self, n: int) -> List[int]:
        output = []
        for i in range(n+1):
            output.append(bin(i).count("1"))
        return output
# @lc code=end

