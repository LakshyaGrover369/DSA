# 1
# 01
# 101
# 0101
# 10101

# BRUTE FORCE
n = 5
for i in range(1, n + 1):
    line = ""
    for j in range(1, i + 1):
        line += str((i + j) % 2)
    print(line)

# BETTER
n = 5
for i in range(1, n + 1):
    print(str(i % 2) * i)

# BEST
n = 5
prev = ""
for i in range(1, n + 1):
    prev += str(i % 2)
    print(prev)