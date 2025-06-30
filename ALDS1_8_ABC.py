class Node:
    def __init__(self, key):
        self.key = key
        self.left = None
        self.right = None

    def insert(self, key) -> None:
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
    
    def find(self, key) -> bool:
        if key < self.key:
            if self.left is None:
                return False
            return self.left.find(key)
        elif key > self.key:
            if self.right is None:
                return False
            return self.right.find(key)
        else:
            return True
    
    def delete(self, key) -> 'Node':
        if key < self.key:
            if self.left:
                self.left = self.left.delete(key)
        elif key > self.key:
            if self.right:
                self.right = self.right.delete(key)
        elif key == self.key:
            if self.left is None:
                return self.right
            elif self.right is None:
                return self.left
            else:
                min_larger_node = self.right
                while min_larger_node.left:
                    min_larger_node = min_larger_node.left
                self.key = min_larger_node.key
                self.right = self.right.delete(min_larger_node.key)
        return self

    
    def inorder(self) -> None:
        if self.left:
            self.left.inorder()
        print(f" {self.key}", end='')
        if self.right:
            self.right.inorder()
    
    def preorder(self) -> None:
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
    elif command[0] == "find":
        key = int(command[1])
        if root and root.find(key):
            print("yes")
        else:
            print("no")
    elif command[0] == "delete":
        key = int(command[1])
        if root:
            root = root.delete(key)