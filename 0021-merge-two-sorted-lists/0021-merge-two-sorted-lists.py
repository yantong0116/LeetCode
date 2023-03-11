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
        # Initialize pointers for both lists and the result list
        i, j = list1, list2
        result = ListNode()
        curr = result
        
        # Traverse both lists, comparing values and merging nodes as necessary
        while i and j:
            if i.val < j.val:
                curr.next = i
                i = i.next
            else:
                curr.next = j
                j = j.next
            curr = curr.next
        
        # Add any remaining nodes from either list to the result
        if i:
            curr.next = i
        elif j:
            curr.next = j
        
        return result.next
