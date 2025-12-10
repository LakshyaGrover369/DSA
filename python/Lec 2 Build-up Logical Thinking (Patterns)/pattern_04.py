# 1
# 22
# 333
# 4444
# 55555

# BRUTE FORCE
n = 5
for i in range(1, n + 1):
    line = ""
    for j in range(i):
        line += str(i)
    print(line)

# BETTER
n = 5
for i in range(1, n + 1):
    print(str(i) * i)

# BEST (Using multiplication is already optimal)
n = 5
print(*[str(i) * i for i in range(1, n + 1)], sep='\n')