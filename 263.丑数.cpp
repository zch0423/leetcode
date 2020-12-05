/*
 * @lc app=leetcode.cn id=263 lang=cpp
 *
 * [263] 丑数
 */

// @lc code=start
class Solution {
public:
    bool isUgly(int num) {
        if(num==0){
            return false;
        }
        bool flag=true;
        while(flag&&num!=1){
            flag = false;
            if(num%2==0){
                num /= 2;
                flag = true;
            }
            if(num%3==0){
                num /= 3;
                flag = true;
            }
            if(num%5==0){
                num /= 5;
                flag = true;
            }
        }
        return flag? true: false;
    }
};
// @lc code=end

