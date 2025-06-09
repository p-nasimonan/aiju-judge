S = int(input())
# S = h*3600 + m*60 + s

h = S//3600
modh = S%3600
m = modh//60
modm = modh%60
s = modm

print(f"{h}:{m}:{s}")