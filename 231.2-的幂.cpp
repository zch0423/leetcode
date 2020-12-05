/*
 * @lc app=leetcode.cn id=231 lang=cpp
 *
 * [231] 2的幂
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<1){
            return false;
        }else if(n==1){
            return true;
        }else if (n % 2 != 0){
            return false;
        }
        int temp = 1;
        while(temp<n&&temp<=1073741823){
            temp*=2;
        }
        return temp == n;
    }
};
// @lc code=end

