# 11 Mar 2025

import math
 
n = int(input())
inputs = []
for i in range(n):
    inputs.append([int(i) for i in str(input()).split(" ")])
 
for i in range(n):
    l = -inputs[i][0]
    r = inputs[i][1]
    d = -inputs[i][2]
    u = inputs[i][3]
    
    a1 = math.sqrt(r**2 + u**2)
    a2 = math.sqrt(u**2 + l**2)
    a3 = math.sqrt(l**2 + d**2)
    a4 = math.sqrt(d**2 + r**2)
    
    P = (u - d)**2
    pp = a1**2 + a4**2
    
    if a1 == a2 == a3 == a4 and math.isclose(P, pp, rel_tol=1e-9):
        print("Yes")
    else:
        print("No")
    