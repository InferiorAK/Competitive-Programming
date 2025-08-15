# Problem: 750A - New Year and Hurry
# Platform: Codeforces
# Solved: 15 Aug 2025
# Solved by: InferiorAK

n, k = [int(i) for i in str(input()).split()]

lim = 4 * 60
left = lim - k

solved = 0
need = 0
for i in range(1, n + 1, 1):
    if need > left:
        break
    need += 5 * i
    solved = i if need <= left else solved
print(solved)
