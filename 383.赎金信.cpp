/*
 * @lc app=leetcode.cn id=383 lang=cpp
 *
 * [383] 赎金信
 */

// @lc code=start
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> m;
        for(auto ch:magazine){
            ++m[ch];
        }
        for(auto ch:ransomNote){
            if(!m.count(ch)){
                return false;
            }else{
                if(--m[ch]<0){
                    return false;
                }
            }
        }
        return true;
    }
};
// @lc code=end

