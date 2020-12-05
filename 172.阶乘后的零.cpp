/*
 * @lc app=leetcode.cn id=172 lang=cpp
 *
 * [172] 阶乘后的零
 */

// @lc code=start
class Solution {
public:
    int trailingZeroes(int n) {
        // 找到O(logn)
        // 5的个数加上10的倍数的0的个数
        int count = 0;
        while (n > 0){
            count += n / 5;
            n = n / 5;
        }
        return count;
    }
};
// @lc code=end

