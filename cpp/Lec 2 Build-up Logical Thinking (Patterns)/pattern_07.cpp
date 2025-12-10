//     *
//    ***
//   *****
//  *******
// *********

//----------------------------------
// BRUTE FORCE APPROACH (Nested loops)
//----------------------------------
#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        // Print spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // Print stars
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

//----------------------------------
// BETTER APPROACH (String constructors)
//----------------------------------
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        string spaces(n - i, ' ');
        string stars(2 * i - 1, '*');
        cout << spaces << stars << endl;
    }
    return 0;
}

//----------------------------------
// BEST APPROACH (Single pre-allocated string)
//----------------------------------
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n = 5;
    string line(n + 4, ' '); // Maximum width: n-1 spaces + (2*n-1) stars

    for (int i = 1; i <= n; i++)
    {
        int spaces = n - i;
        int stars = 2 * i - 1;

        // Fill line efficiently
        fill(line.begin(), line.begin() + spaces, ' ');
        fill(line.begin() + spaces, line.begin() + spaces + stars, '*');
        line[spaces + stars] = '\0'; // Null terminate for puts

        puts(line.c_str());
    }
    return 0;
}