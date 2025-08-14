
# Runtime Error

# t = int(input())
# for i in range(t):
#     n, j, k = [int(i) for i in str(input()).split()]
#     arr = [int(i) for i in str(input()).split()]
#     arr = list(set(arr))
#     x = arr[j-1]
#     arr.sort()
#     arr = arr[len(arr) - k:]
#     if x in arr:
#         print("YES")
#     else:
#         print("NO")


t = int(input())
for i in range(t):
    n, j, k = [int(i) for i in str(input()).split()]
    arr = [int(i) for i in str(input()).split()]
    arr = list(set(arr))
    x = arr[j-1]
    arr.sort()
    arr = arr[len(arr) - k:]
    if x in arr:
        print("YES")
    else:
        print("NO")