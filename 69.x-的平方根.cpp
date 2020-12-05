/*
 * @lc app=leetcode.cn id=69 lang=cpp
 *
 * [69] x 的平方根
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int x) {
        if(x>=2147395600){
            return 46340;
        }
        int high = 92678;  // int for 2^31-1 46340
        int low = 0;
        int mid = 0;

        while(true){
            mid = (high+low)/2;
            if(mid*mid>x){
                high = mid-1;
            }else{  // <=x
                if((mid+1)*(mid+1)>x){
                    return mid;
                }else{
                    low = mid+1;
                }
            }
        }
    }
};
// @lc code=end

