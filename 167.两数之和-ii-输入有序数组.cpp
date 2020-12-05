/*
 * @lc app=leetcode.cn id=167 lang=cpp
 *
 * [167] 两数之和 II - 输入有序数组
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // two pointers

        int left = 0;
        int right = numbers.size()-1;
        int temp;
        while(left<right){
            temp = numbers[left]+numbers[right];
            if(temp==target){
                ++left;
                ++right;
                break;
            }else if(temp>target){
                --right;
            }else{
                ++left;
            }
        }
        return {left, right};
    }
};
// @lc code=end

