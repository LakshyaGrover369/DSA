# Pattern 03 - Striver's Sheet (three approaches)
# Brute Force -> Better -> Best

N = 5

# Approach 1: Brute Force - straightforward nested loops
def brute_force():
    print("Brute Force (N={}):".format(N))
    for i in range(N):
        for j in range(N):
            print('*', end='')
        print()

# Approach 2: Better - use precomputed row to reduce repeated concatenation
def better():
    print("Better (N={}):".format(N))
    row = '*' * N
    for _ in range(N):
        print(row)

# Approach 3: Best - concise / pythonic
def best():
    print("Best (N={}):".format(N))
    for _ in range(N):
        print('*' * N)

if __name__ == '__main__':
    print("=== Pattern 03 demo ===")
    brute_force()
    print()
    better()
    print()
    best()
