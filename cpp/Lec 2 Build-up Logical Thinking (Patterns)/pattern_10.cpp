// *
// **
// ***
// ****
// ***
// **
// *
//----------------------------------
// BRUTE FORCE APPROACH (Two separate loops)
//----------------------------------
#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    // Upper half: 1 to 4 stars
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // Lower half: 3 down to 1 stars
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

//----------------------------------
// BETTER APPROACH (String constructor)
//----------------------------------
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n = 4;
    // Upper half
    for (int i = 1; i <= n; i++)
    {
        cout << string(i, '*') << endl;
    }
    // Lower half
    for (int i = n - 1; i >= 1; i--)
    {
        cout << string(i, '*') << endl;
    }
    return 0;
}

//----------------------------------
// BEST APPROACH (Single loop with formula)
//----------------------------------
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n = 4;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = (i <= n) ? i : 2 * n - i;
        cout << string(stars, '*') << '\n';
    }
    return 0;
}