# Problem: 1742A - Sum
# Platform: Codeforces
# Solved: 16 Aug 2025
# Solved by: InferiorAK


t = int(input())
x = [[int(j) for j in str(input()).split()] for i in range(t)]
x = [sorted(i) for i in x]
# print(x)

SUM = [[sum(i[:2]), i[-1]] for i in x]
check = [i[0] == i[1] for i in SUM]
for status in check:
    if status:
        print("YES")
    else:
        print("NO")