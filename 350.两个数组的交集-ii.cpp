/*
 * @lc app=leetcode.cn id=350 lang=cpp
 *
 * [350] 两个数组的交集 II
 */

// @lc code=start
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> map1;
        unordered_map<int, int> map2;
        for (auto num : nums1)
        {
            ++map1[num];
        }
        for (auto num : nums2)
        {
            ++map2[num];
        }
        vector<int> ans;
        for (auto iter = map2.begin(); iter != map2.end(); ++iter)
        {
            if (map1.count(iter->first)){
                for(int i=0; i<min(map1[iter->first], iter->second);++i){
                    ans.push_back(iter->first);
                }
            }
        }
        return ans;
    }
};
// @lc code=end

