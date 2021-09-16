#
# @lc app=leetcode.cn id=392 lang=python3
#
# [392] 判断子序列
#

# @lc code=start
import re
class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        #  正则表达式
        # pattern = r".*".join(list(s))
        # result = re.search(pattern, t)
        # return result is not None
        sl = len(s)
        tl = len(t)
        i = j = 0
        while i<sl and j<tl:
            if s[i]==t[j]:
                i+=1
            j+=1
        return i==sl

# @lc code=end

