# 4444444
# 4333334
# 4322234
# 4321234
# 4322234
# 4333334
# 4444444

#----------------------------------
# BRUTE FORCE APPROACH
#----------------------------------
n = 4
size = 2 * n - 1

for i in range(1, size + 1):
    for j in range(1, size + 1):
        dist = min(i-1, j-1, size-i, size-j)
        print(n - dist, end="")
    print()

#----------------------------------
# BETTER APPROACH (String building per row)
#----------------------------------
n = 4
size = 2 * n - 1

for i in range(1, size + 1):
    line = ""
    for j in range(1, size + 1):
        dist = min(i-1, j-1, size-i, size-j)
        line += str(n - dist)
    print(line)

#----------------------------------
# BEST APPROACH (Pre-calculated distances + join)
#----------------------------------
n = 4
size = 2 * n - 1

# Pre-calculate distances to border for each index
dist = [min(i, size - 1 - i) for i in range(size)]

# Build pattern using list comprehension
pattern = [
    ''.join(str(n - min(dist[i], dist[j])) for j in range(size))
    for i in range(size)
]
print('\n'.join(pattern))