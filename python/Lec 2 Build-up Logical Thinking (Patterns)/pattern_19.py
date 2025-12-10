# **********
# ***    ***
# **      **
# *        *
# *        *
# **      **
# ***    ***
# **********

# BRUTE FORCE
n = 5
# Upper half
for i in range(n , 1 , -1):
    stars = "*" * i
    spaces = " " * (2 * (n - i))
    print(f"{stars}{spaces}{stars}")
# Lower half
for i in range(1 , n+1 ):
    stars = "*" * i
    spaces = " " * (2 * (n - i))
    print(f"{stars}{spaces}{stars}")
    
# BETTER APPROACH
n = 5
rows = []

# upper half
for i in range(n, 1, -1):
    stars = "*" * i
    spaces = " " * (2 * (n - i))
    rows.append(f"{stars}{spaces}{stars}")

# lower half
for i in range(1, n + 1):
    stars = "*" * i
    spaces = " " * (2 * (n - i))
    rows.append(f"{stars}{spaces}{stars}")
    
# Output all rows
for r in rows:
    print(r)
    
# BEST APPROACH
n = 5

for k in range(2 * n - 1):
    # Map 0..(n-2) → n..2 and (n-1)..(2n-2) → 1..n
    if k < n - 1:
        i = n - k
    else:
        i = k - (n - 2)

    stars = "*" * i
    spaces = " " * (2 * (n - i))
    print(f"{stars}{spaces}{stars}")