// Pattern 10 - Striver's Sheet (three approaches)
// Brute Force -> Better -> Best
#include <bits/stdc++.h>
using namespace std;

// Default N used for demonstration
const int N = 5;

// Approach 1: Brute Force - straightforward nested loops
void brute_force() {
    cout << "Brute Force (N={}):\n";
    int n = N;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) cout << "*";
        cout << "\n";
    }
}

// Approach 2: Better - minor improvements (reduce repeated work)
void better() {
    cout << "Better (N={}):\n";
    int n = N;
    string row(n, '*');
    for (int i = 0; i < n; ++i) cout << row << "\n";
}

// Approach 3: Best - most concise / idiomatic (uses algorithms / functions)
void best() {
    cout << "Best (N={}):\n";
    int n = N;
    for (int i = 0; i < n; ++i) cout << string(n, '*') << "\n";
}

int main() {
    cout << "=== Pattern 10 demo ===\n";
    brute_force();
    cout << "\n";
    better();
    cout << "\n";
    best();
    return 0;
}
