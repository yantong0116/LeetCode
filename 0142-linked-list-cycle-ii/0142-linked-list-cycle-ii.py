# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def detectCycle(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        slow = fast = head
        has_cycle = False
        while not has_cycle and fast and fast.next: 
            slow = slow.next
            fast = fast.next.next
            has_cycle = slow == fast
        if not has_cycle: 
            return None
        p = head
        while p != slow: 
            p = p.next
            slow = slow.next
        return p