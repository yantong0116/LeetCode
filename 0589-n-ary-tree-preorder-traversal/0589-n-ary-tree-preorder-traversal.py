"""
# Definition for a Node.
class Node(object):
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children
"""

class Solution(object):
    def preorder(self, root):
        """
        :type root: Node
        :rtype: List[int]
        """
        result = []
        def helper(curr=root):
            if curr:
                result.append(curr.val)
                for i in curr.children:
                    helper(i)
        helper()
        return result