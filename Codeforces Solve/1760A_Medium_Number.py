# Problem: 1760A - Medium Number
# Platform: Codeforces
# Solved: 16 Aug 2025
# Solved by: InferiorAK

t = int(input())
abcs = [[int(j) for j in str(input()).split()] for i in range(t)]
abcs = [sorted(i)[1] for i in abcs]
for medium in abcs:
    print(medium)
