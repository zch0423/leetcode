/*
 * @lc app=leetcode.cn id=367 lang=cpp
 *
 * [367] 有效的完全平方数
 */

// @lc code=start
class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1){
            return true;
        }
        if(num==0){
            return false;
        }
        for(int i=0;i<=num/2&&i<=46340;++i){
            if(i*i==num){
                return true;
            }   
        }
    return false;
    }
};
// @lc code=end

