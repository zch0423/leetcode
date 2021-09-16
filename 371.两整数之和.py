#
# @lc app=leetcode.cn id=371 lang=python3
#
# [371] 两整数之和
#

# @lc code=start
class Solution:
    def getSum(self, a: int, b: int) -> int:
        MAXINT = 0xFFFFFFFF  # 映射成无符号整数2^32
        def add(num1, num2):
            if num2 == 0:
                return num1 
            temp = (num1 ^ num2)  # 不考虑进位
            carry = ((num1 & num2) << 1) & MAXINT  # 进位
            return add(temp, carry)
        a &= MAXINT
        b &= MAXINT
        a = add(a, b)
        return a if a < 0x80000000 else ~(a^MAXINT)  # 异或是为了控制在32位范围


# @lc code=end

