/*
 * @lc app=leetcode.cn id=168 lang=cpp
 *
 * [168] Excel表列名称
 */

// @lc code=start
class Solution {
public:
    string convertToTitle(int n) {
        // 26进制数
        string ans = "";
        while(n>0){
            n -= 1;
            ans += 'A'+n%26;
            n /= 26;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
// @lc code=end

