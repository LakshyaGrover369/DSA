# *****
# *   *
# *   *
# *   *
# *****

# BRUTE FORCE
n = 5
for i in range(1, n + 1):
    line = ""
    for j in range(1, n + 1):
        if i == 1 or i == n or j == 1 or j == n:
            line += "*"
        else:
            line += " "
    print(line)

# BETTER
n = 5
border = "*" * n
middle = "*" + " " * (n - 2) + "*"
print(border)
for _ in range(n - 2):
    print(middle)
print(border)

# BEST
n = 5
border = "*" * n
middle = "*" + " " * (n - 2) + "*"
print('\n'.join([border] + [middle] * (n - 2) + [border]))