/*
 * @lc app=leetcode.cn id=206 lang=cpp
 *
 * [206] 反转链表
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
    ListNode* reverseList(ListNode* head) {
        // 迭代
        ListNode* prev = new ListNode(0);
        prev->next = nullptr;
        ListNode* temp = nullptr;
        while(head!=nullptr){
            temp = prev->next;
            prev->next = head;
            head = head->next;
            prev->next->next = temp;
        }
        return prev->next;
    }
};
// @lc code=end

