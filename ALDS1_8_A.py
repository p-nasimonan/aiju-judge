class Node:
    def __init__(self, key):
        self.key = key
        self.left = None
        self.right = None

    def insert(self, key):
        if key < self.key:
            if self.left is None:
                self.left = Node(key)
            else:
                self.left.insert(key)
        elif key > self.key:
            if self.right is None:
                self.right = Node(key)
            else:
                self.right.insert(key)
    
    def inorder(self):
        if self.left:
            self.left.inorder()
        print(f" {self.key}", end='')
        if self.right:
            self.right.inorder()
    
    def preorder(self):
        print(f" {self.key}", end='')
        if self.left:
            self.left.preorder()
        if self.right:
            self.right.preorder()

n = int(input())
root = None
for _ in range(n):
    command = input().split()
    if command[0] == "insert":
        key = int(command[1])
        if root is None:
            root = Node(key)
        else:
            root.insert(key)
    elif command[0] == "print":
        if root:
            root.inorder()
            print()
            root.preorder()
            print()