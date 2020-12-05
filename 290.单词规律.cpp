/*
 * @lc app=leetcode.cn id=290 lang=cpp
 *
 * [290] 单词规律
 */

// @lc code=start
class Solution {
public:
    bool wordPattern(string pattern, string str) {
        map<char, string> patStrMap;
        istringstream strm(str);
        string temp="";
        for(int i=0;i<pattern.size();++i){
            if(!(strm>>temp)){
                return false;
            }
            if(patStrMap.count(pattern[i])){
                if(patStrMap[pattern[i]]!=temp){
                    return false;
                }
            }else{
                for(auto iter=patStrMap.begin();iter!=patStrMap.end();++iter){
                    if(iter->second==temp){
                        return false;
                    }
                }
                patStrMap[pattern[i]] = temp; 
            }
        }
        if(strm>>temp){
            return false;
        }
        return true;
    }
};
// @lc code=end

