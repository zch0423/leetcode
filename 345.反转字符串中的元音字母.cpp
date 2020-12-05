/*
 * @lc app=leetcode.cn id=345 lang=cpp
 *
 * [345] 反转字符串中的元音字母
 */

// @lc code=start
class Solution {
public:
    string reverseVowels(string s) {
        int i=0;
        int j=s.size()-1;
        char temp;
        while(i<j){
            if(!isVowel(s[i])){
                ++i;
            }
            if(!isVowel(s[j])){
                --j;
            }
            if(isVowel(s[i])&&isVowel(s[j])){
                temp = s[i];
                s[i++] = s[j];
                s[j--] = temp;
            }
        }
        return s;
    }

    bool isVowel(char ch){
        switch(ch){
            case 'a': return true;
            case 'A': return true;
            case 'e': return true;
            case 'E': return true;
            case 'i': return true;
            case 'I': return true;
            case 'o': return true;
            case 'O': return true;
            case 'u': return true;
            case 'U': return true;
            default: return false;
        }
    }
};
// @lc code=end

