# ABCDE
# ABCD
# ABC
# AB
# A

# BRUTE FORCE
n = 5
for i in range(n, 0, -1):
    line = ""
    for j in range(i):
        line += chr(ord('A') + j)
    print(line)

# BETTER
n = 5
s = "ABCDE"
for i in range(n, 0, -1):
    print(s[:i])

# BEST
n = 5
s = "ABCDE"
while s:
    print(s)
    s = s[:-1]