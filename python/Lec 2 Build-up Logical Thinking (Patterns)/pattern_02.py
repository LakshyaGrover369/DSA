#   Pattern:
#   *
#   **
#   ***
#   ****
#   *****

#----------------------------------
# BRUTE FORCE APPROACH
#----------------------------------
n = 5
for i in range(1, n + 1):
    for j in range(1, i + 1):
        print("*", end="")
    print()


#----------------------------------
# BETTER APPROACH (string repeat)
#----------------------------------
n = 5
for i in range(1, n + 1):
    print("*" * i)


#----------------------------------
# BEST APPROACH (Single loop building string)
#----------------------------------
n = 5
s = ""
for i in range(1, n + 1):
    s += "*"
    print(s)