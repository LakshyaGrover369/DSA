// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

//----------------------------------
// BRUTE FORCE APPROACH
//----------------------------------
#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num++ << " ";
        }
        cout << endl;
    }
    return 0;
}

//----------------------------------
// BETTER APPROACH (Using string building)
//----------------------------------
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n = 5;
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        string s = "";
        for (int j = 1; j <= i; j++)
        {
            s += to_string(num++) + " ";
        }
        cout << s << endl;
    }
    return 0;
}

//----------------------------------
// BEST APPROACH (Correct + Efficient)
//----------------------------------
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n = 5;
    int num = 1;
    // Rough pre-allocation to reduce reallocations
    string s;
    s.reserve(n * n * 3); // safe guess, avoids repeated memory resizing

    for (int i = 1; i <= n; i++)
    {
        s = ""; // reset string for each row
        for (int j = 1; j <= i; j++)
        {
            s += to_string(num++) + " ";
        }
        cout << s << endl;
    }
    return 0;
}
