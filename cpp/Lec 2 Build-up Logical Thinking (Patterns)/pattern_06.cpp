// 12345
// 1234
// 123
// 12
// 1

//----------------------------------
// BRUTE FORCE APPROACH (Nested loops)
//----------------------------------
#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int i = n; i >= 1; i--)
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
// BETTER APPROACH (String building)
//----------------------------------
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n = 5;
    for (int i = n; i >= 1; i--)
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
// BEST APPROACH (Single pre-built string + substring)
//----------------------------------
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n = 5;
    const string s = "12345";
    for (int i = n; i >= 1; i--)
    {
        cout << s.substr(0, i) << '\n';
    }
    return 0;
}