// *       *
// **     **
// ***   ***
// **** ****
// *********
// **** ****
// ***   ***
// **     **
// *       *

// BRUTE FORCE
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n = 5;
    // Upper half
    for (int i = 1; i <= n; i++)
    {
        string stars(i, '*');
        string spaces(2 * (n - i), ' ');
        cout << stars << spaces << stars << endl;
    }
    // Lower half
    for (int i = n - 1; i >= 1; i--)
    {
        string stars(i, '*');
        string spaces(2 * (n - i), ' ');
        cout << stars << spaces << stars << endl;
    }
    return 0;
}

// BETTER
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int row = (i <= n) ? i : 2 * n - i;
        string stars(row, '*');
        string spaces(2 * (n - row), ' ');
        cout << stars << spaces << stars << '\n';
    }
    return 0;
}

// BEST
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int n = 5;
    vector<string> half;

    // Build upper half
    for (int i = 1; i <= n; i++)
    {
        string row = string(i, '*') + string(2 * (n - i), ' ') + string(i, '*');
        half.push_back(row);
    }

    // Print upper half + mirrored lower half
    for (const auto &row : half)
        cout << row << '\n';
    for (auto it = half.rbegin() + 1; it != half.rend(); ++it)
        cout << *it << '\n';
    return 0;
}