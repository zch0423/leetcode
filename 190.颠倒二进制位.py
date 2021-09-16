#
# @lc app=leetcode.cn id=190 lang=python3
#
# [190] 颠倒二进制位
#

# @lc code=start
class Solution:
    # def reverseBits(self, n: int) -> int:
    #     binString = bin(n)[2:]
    #     base = 2**(32-len(binString)) # 开头的0
    #     result = 0
    #     for ch in binString:
    #         if ch == '1':
    #             result += base
    #         base *= 2
    #     return result
    def reverseBits(self, n: int) -> int:
        # bit manipulation
        result = 0
        power = 31
        while n:
            result += (n & 1) << power
            power -= 1
            n = n >> 1
        return result

# @lc code=end

