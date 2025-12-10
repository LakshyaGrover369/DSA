# 1
# 2 3
# 4 5 6
# 7 8 9 10
# 11 12 13 14 15

#----------------------------------
# BRUTE FORCE APPROACH
#----------------------------------
n = 5
num = 1

for i in range(1, n + 1):
    for j in range(1, i + 1):
        print(num, end=" ")
        num += 1
    print()


#----------------------------------
# BETTER APPROACH (Using string building)
#----------------------------------
n = 5
num = 1

for i in range(1, n + 1):
    s = ""
    for j in range(1, i + 1):
        s += str(num) + " "
        num += 1
    print(s)


#----------------------------------
# BEST APPROACH (Correct + Efficient)
#----------------------------------
n = 5
num = 1

for i in range(1, n + 1):
    row = " ".join(str(num + k) for k in range(i))
    num += i
    print(row)
