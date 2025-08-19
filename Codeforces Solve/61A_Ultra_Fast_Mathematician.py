# Problem: 61A - Ultra-Fast Mathematician
# Platform: Codeforces
# Solved: 16 Aug 2025
# Solved by: InferiorAK

x = [int(i) for i in str(input())]
y = [int(i) for i in str(input())]

new = [str(x[i] - y[i]) for i in range(len(x))]
new = ''.join(new)
new = new.replace('-', '')
print(new)