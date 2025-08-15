# Problem: 1154A - Restoring Three Numbers
# Platform: Codeforces
# Solved: 16 Aug 2025
# Solved by: InferiorAK


x = [int(i) for i in str(input()).split()]
MAX = max(x)
x.remove(MAX)
x.append(MAX)

ab, ac, bc, abc = x
a = abc - bc
b = abc - ac
c = abc - ab
print(a, b, c)