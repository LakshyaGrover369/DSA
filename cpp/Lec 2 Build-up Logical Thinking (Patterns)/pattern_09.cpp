//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *

//----------------------------------
// BRUTE FORCE APPROACH (Nested loops)
//----------------------------------
#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    // Upper pyramid
    for (int i = 1; i <= n; i++)
    {
        // Print spaces
        for (int j = 1; j <= n - i; j++)
            cout << " ";
        // Print stars
        for (int k = 1; k <= 2 * i - 1; k++)
            cout << "*";
        cout << endl;
    }
    // Lower pyramid
    for (int i = n - 1; i >= 1; i--)
    {
        // Print spaces
        for (int j = 1; j <= n - i; j++)
            cout << " ";
        // Print stars
        for (int k = 1; k <= 2 * i - 1; k++)
            cout << "*";
        cout << endl;
    }
    return 0;
}

//----------------------------------
// BETTER APPROACH (String constructors per row)
//----------------------------------
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n = 5;
    // Upper half
    for (int i = 1; i <= n; i++)
    {
        cout << string(n - i, ' ') << string(2 * i - 1, '*') << endl;
    }
    // Lower half
    for (int i = n - 1; i >= 1; i--)
    {
        cout << string(n - i, ' ') << string(2 * i - 1, '*') << endl;
    }
    return 0;
}

//----------------------------------
// BEST APPROACH (Pre-allocated buffer reuse)
//----------------------------------
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    const int n = 5;
    const int max_len = 2 * n - 1;
    string line(max_len, ' ');

    // Upper half
    for (int i = 1; i <= n; i++)
    {
        int spaces = n - i;
        int stars = 2 * i - 1;
        fill(line.begin(), line.begin() + spaces, ' ');
        fill(line.begin() + spaces, line.begin() + spaces + stars, '*');
        cout << line.substr(0, spaces + stars) << '\n';
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--)
    {
        int spaces = n - i;
        int stars = 2 * i - 1;
        fill(line.begin(), line.begin() + spaces, ' ');
        fill(line.begin() + spaces, line.begin() + spaces + stars, '*');
        cout << line.substr(0, spaces + stars) << '\n';
    }
    return 0;
}