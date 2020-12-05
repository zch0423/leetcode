/*
 * @lc app=leetcode.cn id=234 lang=cpp
 *
 * [234] 回文链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> nums;
        while(head!=nullptr){
            nums.push_back(head->val);
            head = head->next;
        }
        for(int i=0;i<nums.size()/2;++i){
            if(nums[i]!=nums[nums.size()-1-i]){
                return false;
            }
        }
        return true;
    }   
};
// @lc code=end

