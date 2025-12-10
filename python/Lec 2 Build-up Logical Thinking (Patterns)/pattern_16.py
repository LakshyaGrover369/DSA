# A
# BB
# CCC
# DDDD
# EEEEE

# BRUTE FORCE
n = 5
for i in range(n):
    line = ""
    for j in range(i + 1):
        line += chr(ord('A') + i)
    print(line)

# BETTER
n = 5
for i in range(n):
    print(chr(ord('A') + i) * (i + 1))

# BEST
n = 5
print('\n'.join([chr(ord('A') + i) * (i + 1) for i in range(n)]))