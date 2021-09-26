#
# @lc app=leetcode.cn id=401 lang=python3
#
# [401] 二进制手表
#

# @lc code=start
class Solution:
    def readBinaryWatch(self, num: int) -> List[str]:
        # enumerate
        results = []
        for h in range(12):
            for m in range(60):
                if bin(h).count('1')+bin(m).count('1')==num:
                    results.append(f"{h}:{m:02d}")
        return results
# @lc code=end

