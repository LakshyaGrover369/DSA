# *****
# ****
# ***
# **
# *

#----------------------------------
# BRUTE FORCE APPROACH
#----------------------------------
n = 5
for i in range(n, 0, -1):
    line = ""
    for j in range(i):
        line += "★"  # O(n²) string copying
    print(line)

#----------------------------------
# BETTER APPROACH (String multiplication)
#----------------------------------
n = 5
for i in range(n, 0, -1):
    print("★" * i)

# ----------------------------------
#  BEST APPROACH (List comprehension with join)
# ----------------------------------
n = 5
print('\n'.join(["★" * i for i in range(n, 0, -1)]))