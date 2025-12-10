# 12345
# 1234
# 123
# 12
# 1

#----------------------------------
# BRUTE FORCE APPROACH
#----------------------------------
n = 5
for i in range(n, 0, -1):
    line = ""
    for j in range(1, i + 1):
        line += str(j)  # O(n²) string copying
    print(line)

#----------------------------------
# BETTER APPROACH (Using join)
#----------------------------------
n = 5
for i in range(n, 0, -1):
    print(''.join(str(j) for j in range(1, i + 1)))

#----------------------------------
# BEST APPROACH (String slicing)
#----------------------------------
s = "12345"
print('\n'.join(s[:i] for i in range(len(s), 0, -1)))