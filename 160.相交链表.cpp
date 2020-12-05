/*
 * @lc app=leetcode.cn id=160 lang=cpp
 *
 * [160] 相交链表
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // O(n+m) 双指针
        if(headA==nullptr||headB==nullptr){
            return nullptr;
        }
        ListNode* nodeA = headA;
        ListNode* nodeB = headB;
        while(nodeA!=nodeB){
            nodeA = nodeA!=nullptr?nodeA->next:headB;
            nodeB = nodeB!=nullptr?nodeB->next:headA;
        }
        return nodeA;
        

        // ListNode* ans = nullptr;
        // ListNode* tempA = nullptr;
        // ListNode* tempB = nullptr;
        // bool flag = true;
        // while(headA!=nullptr){
        //     ans = headA;
        //     tempA = headA;
        //     tempB = headB;
        //     while(tempB!=tempA&&tempB!=nullptr){
        //         tempB = tempB->next;
        //     }
        //     flag = (tempB!=nullptr)?true:false;
        //     while(tempA!=nullptr&&tempB!=nullptr){
        //         if(tempA!=tempB){
        //             flag = false;
        //             break;
        //         }
        //         tempA = tempA->next;
        //         tempB = tempB->next;
        //     }
        //     if(flag&&tempA==nullptr&&tempB==nullptr){
        //         return ans;
        //     }
        //     headA = headA->next;
        // }
        // return (!flag)?nullptr:ans;
    }
};
// @lc code=end

