/*
 * @lc app=leetcode.cn id=204 lang=cpp
 *
 * [204] 计数质数
 */

// @lc code=start
class Solution {
public:
    int countPrimes(int n) {
        // time limit
        // if(n<3){
        //     return 0;
        // }
        // int s = 0;
        // bool flag=true;
        // vector<int> prime = {2};
        // for(int i=3;i<n;i+=2){
        //     s = prime.size();
        //     flag = true;
        //     for(int j=0;prime[j]*prime[j]<=i;++j){
        //         if(i%prime[j]==0){
        //             flag = false;
        //             break;
        //         }
        //     }
        //     if(flag){
        //         prime.push_back(i);
        //     }
        // }
        // return prime.size();

        //  Sieve of Eratosthenes 埃拉托色尼筛选法
        vector<bool> isPrim(n, true);
        for (int i = 2; i * i < n; i++)
            if (isPrim[i])
                for (int j = i * i; j < n; j += i)
                    isPrim[j] = false;
        int count = 0;
        for (int i = 2; i < n; i++)
            if (isPrim[i])
                count++;
        return count;
    }
};
// @lc code=end

