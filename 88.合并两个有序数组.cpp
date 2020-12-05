/*
 * @lc app=leetcode.cn id=88 lang=cpp
 *
 * [88] 合并两个有序数组
 */

// @lc code=start
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // 倒着来
        int index1 = m-1;
        int index2 = n-1;
        int i = m+n-1;
        while(index1>=0&&index2>=0){
            if(nums1[index1]>nums2[index2]){
                nums1[i] = nums1[index1];
                --index1;
            }else{
                nums1[i] = nums2[index2];
                --index2;
            }
            --i;
        }
        for(;index2>=0;--index2,--i){
            nums1[i] = nums2[index2];
        }
        }
};
// @lc code=end

