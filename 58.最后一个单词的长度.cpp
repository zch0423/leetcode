/*
 * @lc app=leetcode.cn id=58 lang=cpp
 *
 * [58] 最后一个单词的长度
 */

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        // 从尾部向前历遍
        int tail = s.length()-1;
        while(s[tail]==' '&& tail>=0){
            --tail;
        }
        int count = 0;
        while(tail>=0&&s[tail]!=' '){
            ++count;
            --tail;
        }
        return count;
    }
};
// @lc code=end

