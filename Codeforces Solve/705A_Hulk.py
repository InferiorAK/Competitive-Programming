# Problem: 705A - Hulk
# Platform: Codeforces
# Solved: 15 Aug 2025
# Solved by: InferiorAK

n = int(input())
odd = 'I hate '
even = 'I love '

if n == 1:
    print(odd + 'it')
    exit()

for i in range(1, n + 1, 1):
    if i % 2 != 0:
        print(odd, end='')
    else:
        print(even, end='')

    print('that', end=' ') if i < n else print('it')