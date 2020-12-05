/*
 * @lc app=leetcode.cn id=374 lang=cpp
 *
 * [374] 猜数字大小
 */

// @lc code=start
/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int left = 1;
        int right = n;
        int mid;
        while(left<=right){
            mid = ((long)left+(long)right)/2;
            switch (guess(mid))
            {
            case 0:
                return mid;
                break;
            case -1:
                right = mid-1;
                break;
            default:
                left = mid+1;
                break;
            }
        }
        return left;
    }
};
// @lc code=end

