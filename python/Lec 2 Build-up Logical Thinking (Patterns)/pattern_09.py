#     *
#    ***
#   *****
#  *******
# *********
#  *******
#   *****
#    ***
#     *
#----------------------------------
# BRUTE FORCE APPROACH
#----------------------------------
n = 5
# Upper half
for i in range(1, n + 1):
    line = ""
    for j in range(n - i):  # Spaces
        line += " "
    for k in range(2 * i - 1):  # Stars
        line += "*"
    print(line)

# Lower half
for i in range(n - 1, 0, -1):
    line = ""
    for j in range(n - i):
        line += " "
    for k in range(2 * i - 1):
        line += "*"
    print(line)

#----------------------------------
# BETTER APPROACH (String multiplication)
#----------------------------------
n = 5
# Upper half
for i in range(1, n + 1):
    print(" " * (n - i) + "*" * (2 * i - 1))
# Lower half
for i in range(n - 1, 0, -1):
    print(" " * (n - i) + "*" * (2 * i - 1))

#----------------------------------
# BEST APPROACH (List comprehension + join)
#----------------------------------
n = 5
# Build both halves in one expression
pattern = [" " * (n - i) + "*" * (2 * i - 1) for i in range(1, n + 1)]
pattern += [" " * (n - i) + "*" * (2 * i - 1) for i in range(n - 1, 0, -1)]
print('\n'.join(pattern))