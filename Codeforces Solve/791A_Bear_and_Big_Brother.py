# 14 Aug 2025

limak, bob = [int(i) for i in str(input()).split()]
year = 0

while not limak > bob:
    limak *= 3
    bob *= 2
    year += 1

print(year)
