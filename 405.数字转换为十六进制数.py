#
# @lc app=leetcode.cn id=405 lang=python3
#
# [405] 数字转换为十六进制数
#

# @lc code=start
class Solution:
    def toHex(self, num: int) -> str:
        if num==0:
            return '0'
        if num<0:
            num = ~(num^0xffffffff)
        else:
            num = num&0xffffffff
        table = "0123456789abcdef"
        output = ""
        while num>0:
            temp = num&0xf
            output += table[temp]
            num = num>>4
        return output[::-1]

# @lc code=end

