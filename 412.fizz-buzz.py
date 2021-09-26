#
# @lc app=leetcode.cn id=412 lang=python3
#
# [412] Fizz Buzz
#

# @lc code=start
class Solution:
    def fizzBuzz(self, n: int) -> List[str]:
        output = []
        for i in range(1, n+1):
            temp = ""
            if i%3==0:
                temp += "Fizz"
            if i%5==0:
                temp += "Buzz"
            if not temp:
                temp = str(i)
            output.append(temp)
        return output

# @lc code=end

