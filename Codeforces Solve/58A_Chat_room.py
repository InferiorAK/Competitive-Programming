# Problem: 58A - Chat room
# Platform: Codeforces
# Solved: 15 Aug 2025
# Solved by: InferiorAK

x = str(input())
target = 'hello'

filtered = ''
i = 0
for j in range(0, len(x), 1):
    if filtered != target:
        char = target[i % len(target)]
        if x[j] == char:
            filtered += x[j]
            i += 1
        else:
            pass

if filtered == target:
    print("YES")
else:
    print("NO")
