# Problem: 996A - Hit the Lottery
# Platform: Codeforces
# Solved: 14 Aug 2025
# Solved by: InferiorAK

n = int(input())
frac = [1, 5, 10, 20, 100]
frac = frac[::-1]

count = 0
for bill in frac:
    if bill <= n:
        cnt = n // bill
        n %= bill
        count += cnt

print(count)