# Problem: 486A - Calculating Function
# Platform: Codeforces
# Solved: 15 Aug 2025
# Solved by: InferiorAK

# x = int(input())

# sum = 0
# for n in range(1, x + 1, 1):
#     sum += pow(-1, n) * n

# print(sum)


#### Efficient Code ####
# My Formula:
# if, n = even : (2 + 4 + 6 + 8 + ...) - (1 + 3 + 5 + 7 + ...) = n // 2
# if, n = odd  : (2 + 4 + 6 + ...) - (1 + 3 + 5 + 7 + ...) = (n - 1) // 2 - n

n = int(input())

sum = 0
if n % 2 == 0:
    sum = n // 2
else:
    sum = (n - 1) // 2 - n

print(sum)