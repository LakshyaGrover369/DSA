// E
// DE
// CDE
// BCDE
// ABCDE

//----------------------------------
// BRUTE FORCE APPROACH (Nested loops)
//----------------------------------
#include <iostream>
using namespace std;

int main()
{
    char start = 'E';
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char(start - i + j);
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
    char start = 'E';
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        string row;
        for (int j = 1; j <= i; j++)
        {
            row += char(start - i + j);
        }
        cout << row << endl;
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
    char start = 'E';
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        string row(i, ' ');
        for (int j = 1; j <= i; j++)
        {
            row[j - 1] = char(start - i + j);
        }
        cout << row << endl;
    }
    return 0;
}