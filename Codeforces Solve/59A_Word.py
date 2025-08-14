# Problem: 59A - Word
# Platform: Codeforces
# Solved: 15 Aug 2025
# Solved by: InferiorAK

# from string import ascii_lowercase, ascii_uppercase

# letters = ascii_uppercase + ascii_lowercase
# pairs = {c:ord(c) for c in letters}
# x = str(input())
# print(x.translate(pairs))

x = str(input())
u = 0
l = 0
for c in x:
    if "a" <= c <= "z":
        l += 1
    else:
        u += 1

if u > l:
    print(x.upper())
else:
    print(x.lower())