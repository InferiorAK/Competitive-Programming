# Problem: 41A - Translation
# Platform: Codeforces
# Solved: 15 Aug 2025
# Solved by: InferiorAK

# n, k = [int(i) for i in str(input()).split()]

# nums = []
# if n % 2 == 0:
#     for i in range(1, n, 2):
#         nums.append(i)
#     for j in range(2, n + 2, 2):
#         nums.append(j)
# else:
#     for i in range(1, n + 2, 2):
#         nums.append(i)
#     for j in range(2, n, 2):
#         nums.append(j)

# # print(nums)
# print(nums[k - 1])


#### Efficient Coding ####
## Nice One and Time consuming for formula making

n, k = [int(i) for i in str(input()).split()]

if n % 2 == 0:
    mid1 = n // 2
    mid2 = n // 2 + 1
    if k == mid1:
        kth = mid1 * 2 - 1
    elif k == mid2:
        kth = 2
    elif k < mid1:
        kth = k * 2 - 1
    else:
        kth = k * 2 - n
    print(kth)
else:
    mid = n
    if k == mid // 2 + 1:
        kth = mid
    elif k < mid // 2 + 1 and k > 1:
        kth = k * 2 - 1
    elif k > mid // 2 + 1:
        kth = k * 2 - (n + 1)
    else:
        kth = 1
    print(kth)