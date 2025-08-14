# 18 May 2025

n = int(input())
s = [str(input()) for i in range(n)]
 
for w in s:
        if len(w) > 10:
                print(f'{w[0]}{len(w)-2}{w[-1]}')
        else:
                print(w)