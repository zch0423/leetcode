/*
 * @lc app=leetcode.cn id=299 lang=cpp
 *
 * [299] 猜数字游戏
 */

// @lc code=start
class Solution {
public:
    string getHint(string secret, string guess) {
        // position and number
        int bulls = 0;
        // number
        int cows = 0;
        map<char, int> hashMap;
        for(int i=0;i<secret.size();++i){
            ++hashMap[secret[i]];
            bulls += (secret[i]==guess[i]);
        }
        for(auto &ch: guess){
            cows += (hashMap[ch]-- >0);
        }
        cows -= bulls;
        return to_string(bulls)+'A'+to_string(cows)+'B';
    }
};
// @lc code=end

