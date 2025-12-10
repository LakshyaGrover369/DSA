// 1
// 01
// 101
// 0101
// 10101
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
            cout << ((i + j) % 2);
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
        cout << string(i, '0' + (i % 2)) << endl;
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
    string prev = "";
    for (int i = 1; i <= n; i++)
    {
        prev += char('0' + (i % 2));
        cout << prev << '\n';
    }
    return 0;
}