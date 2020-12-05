/*
 * @lc app=leetcode.cn id=83 lang=cpp
 *
 * [83] 删除排序链表中的重复元素
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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr||head->next==nullptr){
            return head;
        }
        ListNode* temp = head;
        while(temp->next!=nullptr){  
        // 不能写temp 不然会报错 member access within null pointer
            if(temp->val==temp->next->val){
                temp->next = temp->next->next;
            }else{ // 必须加这个else
                temp = temp->next;
            }
        }
        return head;
    }
};
// @lc code=end

