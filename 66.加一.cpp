/*
 * @lc app=leetcode.cn id=66 lang=cpp
 *
 * [66] 加一
 */

// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // 从尾至前历遍
        int l = digits.size();
        if(digits[l-1]<9){
            ++digits[l-1];
            return digits;
        }else{
            int tmp = 0;  // 进位
            for (int i = digits.size()-1; i >= 0; --i){
                ++digits[i];
                digits[i] %= 10;
                if(digits[i]!=0){
                    return digits;
                }
        }
        digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};
// @lc code=end

