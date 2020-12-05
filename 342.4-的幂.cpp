/*
 * @lc app=leetcode.cn id=342 lang=cpp
 *
 * [342] 4的幂
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfFour(int num) {
        return num > 0 && num % 3 == 1&&1073741824 % num == 0;
    }
};
// @lc code=end

