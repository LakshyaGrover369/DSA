// *****
// *   *
// *   *
// *   *
// *****

// BRUTE FORCE
#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
                cout << "*";
            else
                cout << " ";
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
    string border(n, '*');
    string middle = "*" + string(n - 2, ' ') + "*";

    cout << border << endl;
    for (int i = 0; i < n - 2; i++)
    {
        cout << middle << endl;
    }
    cout << border << endl;
    return 0;
}

// BEST
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n = 5;
    string border(n, '*');
    string middle = "*" + string(n - 2, ' ') + "*";

    cout << border << '\n';
    cout << string(n - 2, middle + '\n');
    cout << border << '\n';
    return 0;
}