// ABCDE
// ABCD
// ABC
// AB
// A

// BRUTE FORCE
#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << char('A' + j);
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
    string s = "ABCDE";
    for (int i = n; i >= 1; i--)
    {
        cout << s.substr(0, i) << endl;
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
    string s = "ABCDE";
    while (!s.empty())
    {
        cout << s << '\n';
        s.pop_back();
    }
    return 0;
}