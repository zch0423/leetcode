/*
 * @lc app=leetcode.cn id=349 lang=cpp
 *
 * [349] 两个数组的交集
 */

// @lc code=start
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> map1;
        unordered_map<int, int> map2;
        for(auto num:nums1){
            ++map1[num];
        }
        for(auto num:nums2){
            ++map2[num];
        }
        vector<int> ans;
        for(auto iter=map2.begin();iter!=map2.end();++iter){
            if(map1.count(iter->first)){
                ans.push_back(iter->first);
            }
        }
        return ans;
    }
};
// @lc code=end

