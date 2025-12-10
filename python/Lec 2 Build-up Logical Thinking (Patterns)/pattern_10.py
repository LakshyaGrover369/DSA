# *
# **
# ***
# ****
# ***
# **
# *
#----------------------------------
# BRUTE FORCE APPROACH
#----------------------------------
n = 4
# Upper half
for i in range(1, n + 1):
    line = ""
    for j in range(i):
        line += "*"  # O(n²) string copying
    print(line)
# Lower half
for i in range(n - 1, 0, -1):
    line = ""
    for j in range(i):
        line += "*"
    print(line)

#----------------------------------
# BETTER APPROACH (String multiplication)
#----------------------------------
n = 4
# Upper half
for i in range(1, n + 1):
    print("*" * i)
# Lower half
for i in range(n - 1, 0, -1):
    print("*" * i)

#----------------------------------
# BEST APPROACH (Single loop with list comprehension)
#----------------------------------
n = 4
pattern = ["*" * i for i in range(1, n + 1)]
pattern.extend(["*" * i for i in range(n - 1, 0, -1)])
print('\n'.join(pattern))