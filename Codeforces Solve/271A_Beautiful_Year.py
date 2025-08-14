# Problem: 271A - Beautiful Year
# Platform: Codeforces
# Solved: 15 Aug 2025
# Solved by: InferiorAK

year = str(input())

size = 0
while True:
    year = str(int(year) + 1)
    size = len(set(year))
    if size == len(year):
        print(year)
        break