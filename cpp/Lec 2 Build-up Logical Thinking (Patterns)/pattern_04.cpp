// 1
// 22
// 333
// 4444
// 55555

// BRUTE FORCE
#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
    return 0;
}

// BETTER
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        cout << string(i, '0' + i) << endl;
    }
    return 0;
}

// BEST (Most efficient)
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n = 5;
    string s;
    for (int i = 1; i <= n; i++)
    {
        s.assign(i, '0' + i); // Direct fill
        cout << s << '\n';
    }
    return 0;
}