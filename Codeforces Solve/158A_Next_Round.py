# Problem: 158A - Next Round
# Platform: Codeforces
# Solved: 15 Aug 2025
# Solved by: InferiorAK

n, k = [int(i) for i in str(input()).split()]
Contestant = [int(i) for i in str(input()).split()]

qualified = 0
for c in Contestant:
    if c >= Contestant[k-1] and c > 0:
        qualified += 1
print(qualified)