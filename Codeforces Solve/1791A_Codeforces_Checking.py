# Problem: 1791A - Codeforces Checking
# Platform: Codeforces
# Solved: 16 Aug 2025
# Solved by: InferiorAK

allowed = 'codeforces'
t = int(input())
chars = [str(input()) for i in range(t)]
for c in chars:
    if c in allowed:
        print('YES')
    else:
        print("NO")