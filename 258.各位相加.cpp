/*
 * @lc app=leetcode.cn id=258 lang=cpp
 *
 * [258] 各位相加
 */

// @lc code=start
class Solution {
public:
    int addDigits(int num) {
        // if(num<10){
        //     return num;
        // }
        // int temp = 0;
        // while(num!=0){
        //     temp += num%10;
        //     num /= 10;
        // }
        // return addDigits(temp);
        return (num-1)%9+1;  // ??
    }
};
// @lc code=end

