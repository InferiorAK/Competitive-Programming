# Problem: 266A - Stones on the Table
# Platform: Codeforces
# Solved: 14 Aug 2025
# Solved by: InferiorAK

n = int(input())
cols = list(str(input()))

rm = 0
for i in range(len(cols)-1):
    if cols[i] == cols[i+1]:
        rm += 1

print(rm)