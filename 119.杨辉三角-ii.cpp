/*
 * @lc app=leetcode.cn id=119 lang=cpp
 *
 * [119] 杨辉三角 II
 */

// @lc code=start
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        // vector<vector<int>> ans(rowIndex+1);
        // for (int i = 0; i <= rowIndex; ++i)
        // {
        //     ans[i] = vector<int>(i + 1, 0);
        //     ans[i][0] = 1;
        //     ans[i][i] = 1;
        // }
        // if (rowIndex <= 1)
        //     return ans[rowIndex];
        // for (int i = 1; i <= rowIndex; ++i)
        //     for (int j = 1; j < ans[i].size() - 1; ++j)
        //         ans[i][j] = ans[i - 1][j - 1] + ans[i - 1][j];
        // return ans[rowIndex];
        
        // O(k)空间
        vector<int> ans(rowIndex + 1, 0);
        ans[0] = 1;
        for (int i = 1; i < rowIndex + 1; i++){
            for (int j = i; j >= 1; j--){  // 正着不行
                ans[j] += ans[j - 1];
            }
        }
        return ans;
    }
};
// @lc code=end

