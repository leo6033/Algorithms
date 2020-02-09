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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode d(0);
        ListNode* p = &d;
        int tmp =0;
        while(l1 || l2)
        {
            int x = (l1 != nullptr)? l1->val: 0;
            int y = (l2 != nullptr)? l2->val: 0;
            int value = x + y + tmp;
            tmp = value / 10;
            p->next = new ListNode(value % 10);
            p = p->next;
            l1 = l1 ? l1->next : nullptr;
            l2 = l2 ? l2->next : nullptr;
        }
        if (tmp){
            p->next = new ListNode(tmp);
        }
        return d.next;
    }
};

/*
执行用时 :16 ms, 在所有 C++ 提交中击败了97.04%的用户
内存消耗 :10.5 MB, 在所有 C++ 提交中击败了5.20%的用户
*/