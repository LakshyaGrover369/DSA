# *       *
# **     **
# ***   ***
# **** ****
# *********
# **** ****
# ***   ***
# **     **
# *       *

# BRUTE FORCE
n = 5
# Upper half
for i in range(1, n + 1):
    stars = "*" * i
    spaces = " " * (2 * (n - i))
    print(f"{stars}{spaces}{stars}")
# Lower half
for i in range(n - 1, 0, -1):
    stars = "*" * i
    spaces = " " * (2 * (n - i))
    print(f"{stars}{spaces}{stars}")

# BETTER
n = 5
for i in range(1, 2 * n):
    row = min(i, 2 * n - i)
    stars = "*" * row
    spaces = " " * (2 * (n - row))
    print(f"{stars}{spaces}{stars}")

# BEST
n = 5
half = [f"{'*' * i}{' ' * (2 * (n - i))}{'*' * i}" for i in range(1, n + 1)]
print('\n'.join(half + half[-2::-1]))