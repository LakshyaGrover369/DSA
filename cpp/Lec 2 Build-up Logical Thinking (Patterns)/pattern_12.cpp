// 1      1
// 12    21
// 123  321
// 12344321

//----------------------------------
// BRUTE FORCE APPROACH (Nested loops)
//----------------------------------
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        // Left part: 1 to i
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        // Middle spaces: 2*(n-i)
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            cout << " ";
        }
        // Right part: i to 1
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}

//----------------------------------
// BETTER APPROACH (String building per row)
//----------------------------------
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        string left, right;
        // Build left and right parts
        for (int j = 1; j <= i; j++)
        {
            left += to_string(j);
            right = to_string(j) + right;
        }
        string spaces(2 * (n - i), ' ');
        cout << left << spaces << right << endl;
    }
    return 0;
}

//----------------------------------
// BEST APPROACH (Pre-allocated buffer with direct indexing)
//----------------------------------
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n = 4;
    const int width = 2 * n;
    string line(width, ' ');

    for (int i = 1; i <= n; i++)
    {
        // Fill left part
        for (int j = 1; j <= i; j++)
        {
            line[j - 1] = '0' + j;
        }
        // Fill right part (mirror)
        for (int j = 1; j <= i; j++)
        {
            line[width - j] = '0' + j;
        }
        cout << line << '\n';
        // Reset line to spaces
        fill(line.begin(), line.end(), ' ');
    }
    return 0;
}