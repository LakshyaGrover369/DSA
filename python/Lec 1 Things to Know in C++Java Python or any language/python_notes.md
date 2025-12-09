# Time and Space Complexity Notes (Python)

## Introduction

Complexity analysis describes how much **time** and **memory** your
algorithm will need as input grows.

------------------------------------------------------------------------

## Big-O, Big-Theta, Big-Omega

### **1. Big-O (O) --- Upper Bound**

-   Worst-case time.
-   Algorithm's running time will *never* exceed O(f(n)).

### **2. Big-Theta (Θ) --- Tight Bound**

-   Exact performance --- both upper and lower bound.
-   If something is Θ(n), it means it always grows linearly.

### **3. Big-Omega (Ω) --- Lower Bound**

-   Best-case performance.
-   Minimum time an algorithm will take.

------------------------------------------------------------------------

## Time Complexity Examples (Python Style)

``` python
# O(n)
def sum_elements(arr):
    total = 0
    for x in arr:
        total += x
    return total

# O(n^2)
def print_pairs(arr):
    for i in arr:
        for j in arr:
            print(i, j)

# O(log n)
def binary_search(arr, target):
    l, r = 0, len(arr) - 1
    while l <= r:
        mid = (l + r) // 2
        if arr[mid] == target:
            return mid
        elif arr[mid] < target:
            l = mid + 1
        else:
            r = mid - 1
    return -1
```

------------------------------------------------------------------------

## Space Complexity Examples

``` python
# O(1): Constant space
def find_max(arr):
    max_val = arr[0]
    for x in arr:
        if x > max_val:
            max_val = x
    return max_val

# O(n): new list of size n
def duplicate(arr):
    return arr.copy()

# O(n): recursion stack
def factorial(n):
    if n <= 1:
        return 1
    return n * factorial(n - 1)
```

------------------------------------------------------------------------

## Summary Table

  Complexity   Meaning
  ------------ --------------------------
  O()          Upper bound (worst case)
  Ω()          Lower bound (best case)
  Θ()          Tight bound (exact)

------------------------------------------------------------------------

## Final Notes

-   Big-O is most commonly used in interviews.
-   Big-Theta is best for theoretical understanding.
-   Omega helps understand best-case effects.
