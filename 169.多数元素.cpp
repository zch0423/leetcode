/*
 * @lc app=leetcode.cn id=169 lang=cpp
 *
 * [169] 多数元素
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // boyer-moore 投票算法 O(n)
        int count = 0;
        int candidate;
        for(int i=0;i<nums.size();++i){
            if(count==0){
                candidate = nums[i];
            }
            if(nums[i]==candidate){
                ++count;
            }else{
                --count;
            }
        }
        return candidate;
    }
    // int majorityElement(vector<int>& nums) {
    //     // divide and conquer O(nlogn)
    //     return recursion(nums, 0, nums.size()-1);
    // }

    // int recursion(vector<int>& nums, int low, int high){
    //     if(low==high){
    //         return nums[low];
    //     }
    //     int mid = (low+high)/2;
    //     int left = recursion(nums, low, mid);
    //     int right = recursion(nums, mid+1, high);
    //     if(count(nums, left, low, high)>(high-low+1)/2){
    //         return left;
    //     }
    //     if(count(nums, right, low, high)>(high-low+1)/2){
    //         return right;
    //     }
    //     return -1; //没有众数
    // }
    
    // int count(vector<int>&nums, int target, int low, int high){
    //     int count = 0;
    //     for(int i=low;i<=high;++i){
    //         if(nums[i]==target){
    //             ++count;
    //         }
    //     }
    //     return count;
    // }
};
// @lc code=end

