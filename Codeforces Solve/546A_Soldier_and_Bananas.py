# Problem: 546A	- Soldier and Bananas
# Platform: Codeforces
# Solved: 14 Aug 2025
# Solved by: InferiorAK

k, n, w = [int(i) for i in str(input()).split()]

total = 0
for i in range(1, w+1, 1):
    total += i * k

need = total - n if total > n else 0
print(need)