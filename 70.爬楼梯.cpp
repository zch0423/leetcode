/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
 */

// @lc code=start
class Solution {
public:
    int climbStairs(int n) {
        // // clime(n) = clime(n-1)+clime(n-2)
        // if(n<=2){
        //     return n;
        // }else{
        //     return climbStairs(n-1)+climbStairs(n-2);
        // }
        // 引入优化数组
        if(n<=2){
            return n;
        }
        int* dp = new int[n];
        dp[0] = 1;
        dp[1] = 2;
        for(int i=2;i<n;++i){
            dp[i] = dp[i-1]+dp[i-2];
        }
        return dp[n-1];
    }
};
// @lc code=end

