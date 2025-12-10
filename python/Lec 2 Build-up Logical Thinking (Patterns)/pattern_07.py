#     *
#    ***
#   *****
#  *******
# *********


#----------------------------------
#  BRUTE FORCE APPROACH
# ----------------------------------
n = 5
for i in range(1, n + 1):
    line = ""
    # Add spaces
    for j in range(n - i):
        line += " "  # O(n²) string copying
    # Add stars
    for k in range(2 * i - 1):
        line += "*"
    print(line)

# ----------------------------------
# BETTER APPROACH (String multiplication)
# ----------------------------------

n = 5
for i in range(1, n + 1):
    spaces = " " * (n - i)
    stars = "*" * (2 * i - 1)
    print(spaces + stars)

# ----------------------------------
#  BEST APPROACH (List comprehension)
# ----------------------------------
n = 5
print('\n'.join([
    " " * (n - i) + "*" * (2 * i - 1) 
    for i in range(1, n + 1)
]))