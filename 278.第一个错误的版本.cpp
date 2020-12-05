/*
 * @lc app=leetcode.cn id=278 lang=cpp
 *
 * [278] 第一个错误的版本
 */

// @lc code=start
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        //binary
        int low=1;
        int high=n;
        int mid;
        while(low<high){
            mid = ((long)low + high) / 2;  // 注意int可能越界
            if(!isBadVersion(mid)){
                if(isBadVersion(mid+1)){
                    return mid+1;
                }else{
                    low = mid+1;
                }
            }else{
                if(!isBadVersion(mid-1)){
                    return mid;
                }else{
                    high = mid-1;
                }
            }
        }
        return low;
    }
};
// @lc code=end

