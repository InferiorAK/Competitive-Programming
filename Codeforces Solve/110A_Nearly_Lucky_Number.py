# Problem: 110A - Nearly Lucky Number
# Platform: Codeforces
# Solved: 15 Aug 2025
# Solved by: InferiorAK

#### Wrong but Impressive Solve ####

# x = set(int(i) for i in str(input()))
# lucky = {4, 7}

# if x == lucky:
#     print("YES")
# else:
#     print("NO")

##############################

# Correction:
# The total count of 4 and 7 in a num, if that count is in Lucky num, then the whole num will be a nearly lucky num

x = list(str(input()))
count = x.count('4')
count += x.count('7')

lucky = [4, 7]
if count not in lucky:
    print("NO")
    exit()
print("YES")
