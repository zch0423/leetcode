/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // two-pointers
        int zero = 0;
        while(zero<nums.size()&&nums[zero]!=0)++zero;
        for(int i=zero+1; i<nums.size()&&zero<nums.size();){
            if(nums[i]!=0&&i>zero){
                nums[zero] = nums[i];
                nums[i] = 0;
                while (zero < nums.size() &&nums[zero] != 0)
                    ++zero;
                ++i;
            }else{
                ++i;
            }
        }
    }
};
// @lc code=end

