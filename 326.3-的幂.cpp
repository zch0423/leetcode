/*
 * @lc app=leetcode.cn id=326 lang=cpp
 *
 * [326] 3的幂
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfThree(int n) {
        // if(n==1){
        //     return true;
        // }else if(n==0){
        //     return false;
        // }
        // else{
        //     return (n%3==0)&&isPowerOfThree(n/3);
        // }
        //我觉得很厉害
        return n > 0 && 1162261467 % n == 0;
    }
};
// @lc code=end

