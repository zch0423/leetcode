/*
 * @lc app=leetcode.cn id=268 lang=cpp
 *
 * [268] 缺失数字
 */

// @lc code=start
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int temp = n*(n+1)/2;
        for(auto num:nums){
            temp-=num;
        }
        return temp;
    }
};
// @lc code=end

