# 19 May 2025

n = int(input())
vals = [str(input()) for i in range(n)]

x = 0
for val in vals:
    x = x + 1 if "++" in val else x - 1
print(x)
