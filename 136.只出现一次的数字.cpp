/*
 * @lc app=leetcode.cn id=136 lang=cpp
 *
 * [136] 只出现一次的数字
 */

// @lc code=start
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // 哈希表
        unordered_map<int, short> hash_table;
        for(auto num:nums){
            ++hash_table[num];
        }
        for(auto iter=hash_table.begin();iter!=hash_table.end();++iter){
            if(iter->second==1){
                return iter->first;
            }
        }
        // // 奇淫技巧  ^
        // int ans = 0;
        // for(auto num:nums){
        //     ans ^= num;
        // }
        // return ans;
        throw "wrong";
    }
};
// @lc code=end

