# 18 May 2025

n = int(input())
ANS = [str(input()).split() for i in range(n)]
 
count = 0
for ans in ANS:
        correct = 0
        for a in ans:
                a = int(a)
                if a == 1:
                        correct += 1
        if correct > 1:
                count += 1
print(count)