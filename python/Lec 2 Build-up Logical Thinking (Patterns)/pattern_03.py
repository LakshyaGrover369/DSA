# 1
# 12
# 123
# 1234
# 12345

#----------------------------------
# BRUTE FORCE APPROACH
#----------------------------------
n = 5
for i in range(1, n + 1):
    line = ""
    for j in range(1, i + 1):
        line += str(j)  # O(n²) string copying
    print(line)

#----------------------------------
# BETTER APPROACH (Using list and join)
#----------------------------------
n = 5
for i in range(1, n + 1):
    line = ''.join(str(j) for j in range(1, i + 1))
    print(line)

#----------------------------------
# BEST APPROACH (Single string accumulation)
#----------------------------------
n = 5
s = ""
for i in range(1, n + 1):
    s += str(i)  # Amortized O(1) appends
    print(s)