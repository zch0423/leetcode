/*
 * @lc app=leetcode.cn id=219 lang=cpp
 *
 * [219] 存在重复元素 II
 */

// @lc code=start
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // hashtable
        unordered_map<int,int> numHash;
        for(int i=0;i<nums.size();++i){
            if(!numHash.count(nums[i])){
                numHash[nums[i]] = i+1;
            }else if(i-numHash[nums[i]]<k){
                return true;
            }else{
                numHash[nums[i]] = i+1;
            }
        }
        return false;
        // 暴力搜索 time limit
        // for(int i=0;i<nums.size();++i){
        //     for(int j=i+1;j<=i+k&&j<nums.size();++j){
        //         if(nums[i]==nums[j]){
        //             return true;
        //         }
        //     }
        // }
        // return false;
    }
};
// @lc code=end

