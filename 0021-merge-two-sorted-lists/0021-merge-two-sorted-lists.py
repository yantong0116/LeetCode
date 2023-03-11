# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution(object):
    def mergeTwoLists(self, list1, list2):
        """
        :type list1: Optional[ListNode]
        :type list2: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
        ans = ListNode()
        temp = ans
        while list1 and list2:
            if list1.val < list2.val:
                ans.next = list1
                list1 = list1.next
            else:
                ans.next = list2
                list2 = list2.next
            ans = ans.next
        while list1:
            ans.next = list1
            ans = ans.next
            list1 = list1.next
        while list2:
            ans.next = list2
            ans = ans.next
            list2 = list2.next
        return  temp.next