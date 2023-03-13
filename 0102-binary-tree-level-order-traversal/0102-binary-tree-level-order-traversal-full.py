from collections import deque

class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

def generate_tree(nodes):
    if not nodes:
        return None
    
    root = TreeNode(nodes[0])
    queue = [root]
    i = 1
    
    while i < len(nodes):
        node = queue.pop(0)
        
        if nodes[i] is not None:
            node.left = TreeNode(nodes[i])
            queue.append(node.left)
        i += 1
        
        if i < len(nodes) and nodes[i] is not None:
            node.right = TreeNode(nodes[i])
            queue.append(node.right)
        i += 1
    
    return root

root = generate_tree([3,9,20,None,None,15,7])

def levelOrder(root):
        """
        :type root: TreeNode
        :rtype: List[List[int]]
        """  
        result = []
        if root is None:
            return result
        q = deque([root])

        while q:
            t = []
            for _ in range(len(q)):
                node = q.popleft()
                t.append(node.val)
                if node.left:
                    q.append(node.left)
                if node.right:
                    q.append(node.right)
            result.append(t)
        return result

print(levelOrder(root))
