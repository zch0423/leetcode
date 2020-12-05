/*
 * @lc app=leetcode.cn id=125 lang=cpp
 *
 * [125] 验证回文串
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(string s) {
    // 双指针
    int left = 0;
    int right = s.size()-1;
    char cLeft;
    char cRight;
    while(left<right){
        cLeft = s[left];
        cRight = s[right];
        if(!isalnum(cLeft)){  // alpha num
            ++left;
            continue;
        }
        if(!isalnum(cRight)){
            --right;
            continue;
        }
        if(tolower(cLeft)!=tolower(cRight)){
            return false;
        }
        ++left;
        --right;
    }
    return true;
    // while(left<=right){
    //     cLeft = s[left];
    //     cRight = s[right];
    //     if(isdigit(cLeft)&&isdigit(cRight)){
    //         if(cLeft!=cRight){
    //             return false;
    //         }
    //         ++left;--right;
    //     }else if(isalpha(cLeft)&&isalpha(cRight)){
    //         if(tolower(cLeft)!=tolower(cRight)){
    //             return false;
    //         }
    //         ++left;--right;
    //     }else if(!(isalpha(cLeft)||isdigit(cLeft))){
    //         ++left;
    //         continue;
    //     }else if(!(isalpha(cRight)||isdigit(cRight))){
    //         --right;
    //         continue;
    //     }else{
    //         return false;
    //     }
    // }
    // return true;
    }
};
// @lc code=end

