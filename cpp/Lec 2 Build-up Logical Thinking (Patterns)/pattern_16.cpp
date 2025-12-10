// A
// BB
// CCC
// DDDD
// EEEEE

// BRUTE FORCE
#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << char('A' + i);
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
    for (int i = 0; i < n; i++)
    {
        cout << string(i + 1, 'A' + i) << endl;
    }
    return 0;
}

// BEST
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n = 5;
    string s;
    for (int i = 0; i < n; i++)
    {
        s.assign(i + 1, 'A' + i);
        cout << s << '\n';
    }
    return 0;
}