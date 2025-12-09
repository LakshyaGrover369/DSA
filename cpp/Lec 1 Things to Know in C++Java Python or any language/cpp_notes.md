# Time and Space Complexity Notes (C++)

## Introduction

Time and space complexity help measure how efficient an algorithm is.
They are based on how the program's resource usage grows with input size
**n**.

------------------------------------------------------------------------

## Big-O, Big-Theta, Big-Omega

### **1. Big-O (Upper Bound)**

-   Describes the **worst case**
-   Algorithm will take **no more time than O(f(n))**
-   Example: `O(n^2)` means time can grow quadratically at most.

### **2. Big-Theta (Tight Bound)**

-   Describes the **exact growth rate**
-   Algorithm runs in **Θ(f(n))** for worst, average, and best case.
-   Example: If algorithm always takes `3n + 2` steps → Θ(n)

### **3. Big-Omega (Lower Bound)**

-   Describes the **best possible case**
-   Algorithm takes **at least Ω(f(n))**
-   Example: Linear search best case = Ω(1)

------------------------------------------------------------------------

## Time Complexity Examples (C++ Style)

``` cpp
// O(n): Linear Time
int sum(vector<int>& arr) {
    int total = 0;
    for(int x : arr) total += x;
    return total;
}

// O(n^2): Nested loops
void printPairs(vector<int>& arr) {
    for(int i = 0; i < arr.size(); i++) {
        for(int j = 0; j < arr.size(); j++) {
            cout << arr[i] << ", " << arr[j];
        }
    }
}

// O(log n): Binary Search
int binarySearch(vector<int>& arr, int target) {
    int l = 0, r = arr.size() - 1;
    while(l <= r) {
        int mid = (l + r) / 2;
        if(arr[mid] == target) return mid;
        else if(arr[mid] < target) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}
```

------------------------------------------------------------------------

## Space Complexity Examples

``` cpp
// O(1): Constant space (only variables)
int sum(vector<int>& arr) { ... }

// O(n): New array of size n
vector<int> copy(vector<int>& arr) {
    vector<int> res = arr;
    return res;
}

// O(n): Recursion stack
int factorial(int n) {
    if(n <= 1) return 1;
    return n * factorial(n - 1);
}
```

------------------------------------------------------------------------

## Summary Table

  Complexity   Meaning
  ------------ ------------------------
  O(f(n))      Worst-case upper bound
  Ω(f(n))      Best-case lower bound
  Θ(f(n))      Exact tight bound

------------------------------------------------------------------------

## Final Notes

-   Use Big-O for interview answers.
-   Θ gives the most accurate picture.
-   Ω is useful for minimum performance guarantees.
