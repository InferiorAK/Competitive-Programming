# 13 Apr 2025

n = int(input())
inp = [str(input()).split() for _ in range(n)]
for i in inp:
    for x in i:
        print(x[0], end="")
    print()