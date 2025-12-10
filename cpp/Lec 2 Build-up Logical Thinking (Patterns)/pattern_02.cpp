//  Pattern:
//  *
//  **
//  ***
//  ****
//  *****

//----------------------------------
// BRUTE FORCE APPROACH
//----------------------------------
#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
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
// BETTER APPROACH (Using string constructor)
//----------------------------------
#include <iostream>
#include <string>
using namespace std;
int main2()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        cout << string(i, '*') << endl;
    }
    return 0;
}

//----------------------------------
// BEST APPROACH (Single loop)
//----------------------------------
#include <iostream>
using namespace std;
int main3()
{
    int n = 5;
    int count = 1;
    string s = "";
    for (int i = 1; i <= n; i++)
    {
        s += "*";
        cout << s << endl;
    }
    return 0;
}