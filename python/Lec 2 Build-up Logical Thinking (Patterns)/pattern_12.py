# 1      1
# 12    21
# 123  321
# 12344321

#----------------------------------
# BRUTE FORCE APPROACH
#----------------------------------
n = 4
for i in range(1, n + 1):
    # Left part
    line = ''.join(str(j) for j in range(1, i + 1))
    # Middle spaces
    line += ' ' * (2 * (n - i))
    # Right part (reverse)
    line += ''.join(str(j) for j in range(i, 0, -1))
    print(line)

#----------------------------------
# BETTER APPROACH (String multiplication)
#----------------------------------
n = 4
for i in range(1, n + 1):
    left = ''.join(str(j) for j in range(1, i + 1))
    right = ''.join(str(j) for j in range(i, 0, -1))
    print(f"{left}{' ' * (2 * (n - i))}{right}")

#----------------------------------
# BEST APPROACH (Single generator expression)
#----------------------------------
n = 4
width = 2 * n
for i in range(1, n + 1):
    # Create row with list comprehension
    row = [' '] * width
    # Fill left and right
    for j in range(1, i + 1):
        row[j - 1] = str(j)
        row[width - j] = str(j)
    print(''.join(row))