/*
 * @lc app=leetcode.cn id=171 lang=cpp
 *
 * [171] Excel表列序号
 */

// @lc code=start
class Solution {
public:
    int titleToNumber(string s) {
        //168思路倒着来
        // int ans=0;
        // int temp;
        // for(int i=s.size()-1,power=0;i>=0;--i,++power){
        //     temp = s[i]-'A'+1;
        //     ans += (temp*pow(26,power));
        // }
        // return ans;
        // 避免幂运算
        int ans = 0;
        int temp;
        for(int i=0;i<s.size();++i){
            temp = s[i]-'A'+1;
            ans = ans*26+temp;
        }
        return ans;
    }
};
// @lc code=end

