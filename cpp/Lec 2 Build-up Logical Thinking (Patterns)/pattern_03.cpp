// 1
// 12
// 123
// 1234
// 12345

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
            cout << j;
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
    for (int i = 1; i <= n; i++)
    {
        string s = "";
        for (int j = 1; j <= i; j++)
        {
            s += to_string(j);
        }
        cout << s << endl;
    }
    return 0;
}

//----------------------------------
// BEST APPROACH (Single pass with pre-allocation)
//----------------------------------
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n = 5;
    string s;
    s.reserve(15); // Pre-allocate memory
    for (int i = 1; i <= n; i++)
    {
        s += to_string(i);
        cout << s << '\n';
    }
    return 0;
}