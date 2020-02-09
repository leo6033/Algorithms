# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        head = ListNode(0)
        pre = 0
        curr = head
        while l1 or l2:
            x = l1.val if l1 else 0
            y = l2.val if l2 else 0
            value = x + y + pre
            pre = value // 10
            curr.next = ListNode(value % 10)
            curr = curr.next
            l1 = l1.next if l1 else None
            l2 = l2.next if l2 else None
        if pre:
            curr.next = ListNode(pre)
        return head.next
