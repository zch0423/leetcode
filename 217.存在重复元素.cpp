/*
 * @lc app=leetcode.cn id=217 lang=cpp
 *
 * [217] 存在重复元素
 */

// @lc code=start
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // hash_table
        unordered_map<int,int> numHash;
        for(auto num:nums){
            if(numHash.count(num)==0){
                ++numHash[num];
            }else{
                return true;
            }
        }
        return false;
    }
};
// @lc code=end

