#
# @lc app=leetcode.cn id=228 lang=python3
#
# [228] 汇总区间
#

# @lc code=start
class Solution:
    def summaryRanges(self, nums: List[int]) -> List[str]:
        result = []
        if not nums:
            return result
        # if len(nums) == 1:
        #     result.append(str(left))
        #     return result
        left = nums[0]
        right = left 
        for each in nums:
            if each != right:
                if right == left+1:  # only one number
                    result.append(str(left))
                else:
                    result.append("%d->%d" % (left, right-1))
                left = each
                right = left
            right += 1
        if left == nums[-1]:
            result.append(str(nums[-1]))
        else:
            result.append("%d->%d" % (left, right-1))
        return result

        
# @lc code=end

