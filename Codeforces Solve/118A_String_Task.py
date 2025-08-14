# 14 Aug 2025

x = list(str(input()).lower())
vowels = list("AOYEUI".lower())
y = ""

for c in x:
    if not c in vowels:
        y += "." + c

print(y)