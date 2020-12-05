/*
 * @lc app=leetcode.cn id=202 lang=cpp
 *
 * [202] 快乐数
 */

// @lc code=start
class Solution {
public:
    bool isHappy(int n) {
        // 快慢指针
        int fast=n;
        int slow=n;
        do{
            fast = squareSum(fast);
            fast = squareSum(fast);
            slow = squareSum(slow);
        }while(fast!=slow);
        return fast==1;
    }
    
    int squareSum(int n){
        int ans=0;
        int digit=0;
        while(n!=0){
            digit = n%10;
            ans += digit*digit;
            n/=10;
        }
        return ans;
    }
};
// @lc code=end

