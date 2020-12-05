/*
 * @lc app=leetcode.cn id=203 lang=cpp
 *
 * [203] 移除链表元素
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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* prev = new ListNode(0); // 哨兵
        prev->next = head;
        ListNode* ans = prev;
        while(prev->next!=nullptr){
            if(prev->next->val==val){
                prev->next = prev->next->next;
            }else{
                prev = prev->next;
            }
        }
        return ans->next;
    }
};
// @lc code=end

