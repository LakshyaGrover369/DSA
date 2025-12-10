# A
# AB
# ABC
# ABCD
# ABCDE

# BRUTE FORCE
n = 5
for i in range(1, n + 1):
    line = ""
    for j in range(i):
        line += chr(ord('A') + j)
    print(line)

# BETTER
n = 5
for i in range(1, n + 1):
    print(''.join(chr(ord('A') + j) for j in range(i)))

# BEST
n = 5
s = ""
for i in range(n):
    s += chr(ord('A') + i)
    print(s)