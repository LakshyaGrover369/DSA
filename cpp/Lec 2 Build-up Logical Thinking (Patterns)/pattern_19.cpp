
// **********
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// **********

// BRUTE FORCE
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int n = 5;
    // Upper half
    for (int i = n; i > 1; i--)
    {
        string stars(i, '*');
        string spaces(2 * (n - i), ' ');
        cout << stars << spaces << stars << endl;
    }
    // Lower half
    for (int i = 1; i <= n; i++)
    {
        string stars(i, '*');
        string spaces(2 * (n - i), ' ');
        cout << stars << spaces << stars << endl;
    }

    cout << endl;
    return 0;
}

// BETTER APPROACH
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int n = 5;
    vector<string> rows;

    // upper half
    for (int i = n; i > 1; i--)
    {
        string stars(i, '*');
        string spaces(2 * (n - i), ' ');
        rows.push_back(stars + spaces + stars);
    }

    // lower half
    for (int i = 1; i <= n; i++)
    {
        string stars(i, '*');
        string spaces(2 * (n - i), ' ');
        rows.push_back(stars + spaces + stars);
    }

    // Output all rows
    for (string r : rows)
        cout << r << endl;

    cout << endl;
    return 0;
}

// BEST APPROACH
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n = 5;

    for (int k = 0; k < 2 * n - 1; k++)
    {
        int i;

        // Map upper half and lower half
        if (k < n - 1)
            i = n - k;
        else
            i = k - (n - 2);

        string stars(i, '*');
        string spaces(2 * (n - i), ' ');
        cout << stars << spaces << stars << endl;
    }

    return 0;
}
