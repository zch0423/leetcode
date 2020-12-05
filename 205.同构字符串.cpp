/*
 * @lc app=leetcode.cn id=205 lang=cpp
 *
 * [205] 同构字符串
 */

// @lc code=start
class Solution {
public:
    bool isIsomorphic(string s, string t) {
       // 哈希表
       unordered_map<char, int> sHash;
       unordered_map<char, int> tHash;
       for(int i=0;i<s.size();++i){
           if (sHash.count(s[i]) && tHash.count(t[i])){
               if (sHash[s[i]] != tHash[t[i]])
                   return false;
           }
           else if (sHash.count(s[i]) || tHash.count(t[i]))
               return false;
           else{
               sHash[s[i]] = i;
               tHash[t[i]] = i;
           }
       }
       return true;
    }
};
// @lc code=end

