# 23 Apr 2024

def cmp(x, y):
    return (x >= y) - (x <= y)
 
x = str(input()).lower()
y = str(input()).lower()
 
print(cmp(x, y))