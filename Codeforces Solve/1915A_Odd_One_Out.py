# Problem: 1915A - Odd One Out
# Platform: Codeforces
# Solved: 16 Aug 2025
# Solved by: InferiorAK

t = int(input())
abcs = [[int(j) for j in str(input()).split()] for i in range(t)]
once = [[j if i.count(j) == 1 else 0 for j in i] for i in abcs]
once = [sorted(i)[-1] for i in once]
for i in once:
    print(i)

# for i in abcs:
#     for j in i:
#         if i.count(j) == 1:
#             print(j)
