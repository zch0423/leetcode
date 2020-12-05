/*
 * @lc app=leetcode.cn id=242 lang=cpp
 *
 * [242] 有效的字母异位词
 */

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<char,int> hash;
        for(int i=0;i<s.size();++i){
            if(!hash.count(s[i])){
                hash[s[i]] = 1;
            }else{
                ++hash[s[i]];
            }
            if(!hash.count(t[i])){
                hash[t[i]] = -1;
            }else{
                --hash[t[i]];
            }
        }
        for(auto iter = hash.begin(); iter != hash.end(); iter++){
            if(iter->second!=0){
                return false;
            }
        }
        return true;
    }
};
// @lc code=end

