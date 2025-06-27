def is_sosuu(value: int) -> bool:
    if value < 2:
        return False
    for i in range(2, int(value ** 0.5) + 1):
        if value % i == 0:
            return False
    return True
cnt:int = 0
n = int(input())
for _ in range(n):
    if is_sosuu(int(input())):
        cnt += 1
print(cnt)