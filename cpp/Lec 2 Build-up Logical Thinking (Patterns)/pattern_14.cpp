// A
// AB
// ABC
// ABCD
// ABCDE
// BRUTE FORCE
#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (char c = 'A'; c < 'A' + i; c++)
        {
            cout << c;
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
        cout << string(i, '0') << endl;
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
    for (char c = 'A'; c < 'A' + n; c++)
    {
        s += c;
        cout << s << '\n';
    }
    return 0;
}