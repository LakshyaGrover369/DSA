# E
# DE
# CDE
# BCDE
# ABCDE

#----------------------------------
# BRUTE FORCE APPROACH
#----------------------------------
start = 'E'
n = 5
for i in range(1, n + 1):
    line = ""
    for j in range(1, i + 1):
        line += chr(ord(start) - i + j)
    print(line)

#----------------------------------
# BETTER APPROACH (String multiplication)
#----------------------------------
start = 'E'
n = 5
for i in range(1, n + 1):
    row = "".join(chr(ord(start) - i + j) for j in range(1, i + 1))
    print(row)

#----------------------------------
# BEST APPROACH (List comprehension)
#----------------------------------
start = 'E'
n = 5
print("\n".join("".join(chr(ord(start) - i + j) for j in range(1, i + 1)) for i in range(1, n + 1)))