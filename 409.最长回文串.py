#
# @lc app=leetcode.cn id=409 lang=python3
#
# [409] 最长回文串
#

# @lc code=start
class Solution:
    def longestPalindrome(self, s: str) -> int:
        # 偶数字符数+1
        table = dict()
        for ch in s:
            if table.get(ch, -1)>0:
                table[ch] += 1
            else:
                table[ch] = 1
        temp = 0
        for k, v in table.items():
            temp += v//2
        temp*=2
        if temp != len(s):
            temp+=1
        return temp

'''
class Solution:
    def longestPalindrome(self, s: str) -> int:
        ans = 0
        count = collections.Counter(s)
        for v in count.values():
            ans += v // 2 * 2
            if ans % 2 == 0 and v % 2 == 1:
                ans += 1
        return ans

作者：LeetCode-Solution
链接：https://leetcode-cn.com/problems/longest-palindrome/solution/zui-chang-hui-wen-chuan-by-leetcode-solution/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
'''
# @lc code=end

