#     A
#    ABA
#   ABCBA
#  ABCDCBA
# ABCDEDCBA

# BRUTE FORCE
n = 5
for i in range(1, n + 1):
    line = " " * (n - i)
    # Left half
    for j in range(i):
        line += chr(ord('A') + j)
    # Right half
    for j in range(i - 2, -1, -1):
        line += chr(ord('A') + j)
    print(line)

# BETTER
n = 5
base = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
for i in range(1, n + 1):
    left = base[:i]
    print(f"{' ' * (n - i)}{left}{left[-2::-1]}")

# BEST
n = 5
base = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
print(*[f"{' ' * (n - i)}{base[:i]}{base[:i-1][::-1]}" 
      for i in range(1, n + 1)], sep='\n')