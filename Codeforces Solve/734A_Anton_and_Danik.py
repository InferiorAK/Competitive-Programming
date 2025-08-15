# Problem: 734A - Anton and Danik
# Platform: Codeforces
# Solved: 15 Aug 2025
# Solved by: InferiorAK

n = input()
ad = list(str(input()))

A = ad.count("A")
D = ad.count("D")
if A == D:
    print("Friendship")
elif A > D:
    print("Anton")
else:
    print("Danik")