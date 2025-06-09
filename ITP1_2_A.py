"""
args:
    a,
    b,
return:
    str("<" or "==" or ">")
"""
def compareto(a: int, b: int) -> str:
    if a == b:
        return "=="
    elif a < b:
        return "<"
    else:
        return ">"

a, b = map(int, input().split())
print("a",compareto(a,b),"b")