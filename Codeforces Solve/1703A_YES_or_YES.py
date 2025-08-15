# Problem: 1703A - YES or YES?
# Platform: Codeforces
# Solved: 15 Aug 2025
# Solved by: InferiorAK

t = int(input())
st = [str(input()) for i in range(t)]

for s in st:
    if s.lower() == 'yes':
        print("YES")
    else:
        print("NO")