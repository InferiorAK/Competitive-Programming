# Problem: 1807A - Plus or Minus
# Platform: Codeforces
# Solved: 16 Aug 2025
# Solved by: InferiorAK

t = int(input())
abcs = [[int(j) for j in str(input()).split()] for i in range(t)]
for a,b,c in abcs:
    if a + b == c:
        print('+')
    else:
        print('-')
