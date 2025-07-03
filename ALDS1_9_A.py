class Heap:
    def __init__(self, lst:list):
        self.size = len(lst)
        self.lst = lst

    def print(self):
        for i, key in enumerate(self.lst):
            node_id = i + 1  # 1始まり
            print(f"node {node_id}: key = {key}, ", end="")
            if node_id // 2 >= 1:
                parent_id = node_id // 2
                parent_key = self.lst[parent_id - 1]
                print(f"parent key = {parent_key}, ", end="")

            # 左の子
            left_id = 2 * node_id
            if left_id <= self.size: 
                left_key = self.lst[left_id - 1]
                print(f"left key = {left_key}, ", end="")
            # 右の子
            right_id = 2 * node_id + 1
            if right_id <= self.size:
                right_key = self.lst[right_id - 1]
                print(f"right key = {right_key}, ", end="")
            print("")

n = int(input())
lst = list(map(int, input().split()))
heap = Heap(lst)
heap.print()