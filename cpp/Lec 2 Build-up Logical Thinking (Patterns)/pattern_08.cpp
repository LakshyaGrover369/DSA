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
    for (int i = 1; i <= n; i++)
    {
        // Print i-1 spaces
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }
        // Print 2*(n-i)+1 stars
        for (int k = 1; k <= 2 * (n - i) + 1; k++)
        {
            cout << "*";
        }
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
    for (int i = 1; i <= n; i++)
    {
        cout << string(i - 1, ' ') << string(2 * (n - i) + 1, '*') << endl;
    }
    return 0;
}

//----------------------------------
// BEST APPROACH (Reuse strings with assign)
//----------------------------------
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n = 5;
    string spaces;
    string stars;

    for (int i = 1; i <= n; i++)
    {
        spaces.assign(i - 1, ' ');
        stars.assign(2 * (n - i) + 1, '*');
        cout << spaces << stars << '\n';
    }
    return 0;
}