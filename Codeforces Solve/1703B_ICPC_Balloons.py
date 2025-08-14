# 18 May 2025

teams = int(input())
for team in range(teams):
        points = 0
        l = int(input())
        solves = str(input())
        blood = len(set(solves))
        points += blood * 2
        points += len(solves) - blood
        print(points)