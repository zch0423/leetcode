/*
 * @lc app=leetcode.cn id=389 lang=cpp
 *
 * [389] 找不同
 */

// @lc code=start
class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans = 0;
        int i;
        for(i=0;i<s.size();++i){
            ans ^= s[i]^t[i];
        }
        ans ^= t[i];
        return ans;
    }
};
// @lc code=end

