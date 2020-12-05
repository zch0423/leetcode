/*
 * @lc app=leetcode.cn id=198 lang=cpp
 *
 * [198] 打家劫舍
 */

// @lc code=start
class Solution {
public:
    int rob(vector<int>& nums) {
        // dp
        int pre=0;
        int ans=0;
        int temp;
        for(auto num:nums){
            temp = ans;
            ans = max(pre+num, ans);
            pre = temp;
        }
        return ans;
        // switch(nums.size()){
        // case 0:
        //     return 0;
        // case 1:
        //     return nums[0];
        // case 2:
        //     return max(nums[0],nums[1]);
        // }
        // vector<int> dp;
        // dp.push_back(nums[0]);
        // dp.push_back(max(nums[0], nums[1]));
        // for(int i=2;i<nums.size();++i){
        //     dp.push_back(max(dp[i-1], dp[i-2]+nums[i]));
        // }
        // return dp[nums.size()-1];
    }
};
// @lc code=end

