// *****
// ****
// ***
// **
// *
// //----------------------------------
// // BRUTE FORCE APPROACH (Nested loops)
// //----------------------------------
#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "★";
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
    int n = 5;
    for (int i = n; i >= 1; i--)
    {
        cout << string(i, '*') << endl;
    }
    return 0;
}

// //----------------------------------
// // BEST APPROACH (Single loop, pre-allocated)
// //----------------------------------
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n = 5;
    string s(n, '*');
    for (int i = 0; i < n; i++)
    {
        cout << s << '\n';
        s.pop_back(); // Remove last character
    }
    return 0;
}