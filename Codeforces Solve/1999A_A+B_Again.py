# Problem: 1999A - A+B Again?
# Platform: Codeforces
# Solved: 16 Aug 2025
# Solved by: InferiorAK

t = int(input())
n = [str(input()) for i in range(t)]
sums = [eval(f'{num[0]} + {num[1]}') for num in n]
for SUM in sums:
    print(SUM)
