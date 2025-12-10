//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA

// BRUTE FORCE
#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        // Spaces
        for (int j = 1; j <= n - i; j++)
            cout << " ";
        // Left half
        for (int j = 1; j <= i; j++)
            cout << char('A' + j - 1);
        // Right half (mirror)
        for (int j = i - 1; j >= 1; j--)
            cout << char('A' + j - 1);
        cout << endl;
    }
    return 0;
}

// BETTER
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int n = 5;
    string base = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i = 1; i <= n; i++)
    {
        cout << string(n - i, ' ');
        string left = base.substr(0, i);
        string right = left.substr(0, i - 1);
        reverse(right.begin(), right.end());
        cout << left << right << endl;
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
    string base = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string row(2 * n - 1, ' ');

    for (int i = 1; i <= n; i++)
    {
        int spaces = n - i;
        // Fill row
        for (int j = 0; j < i; j++)
        {
            row[spaces + j] = base[j];
            row[spaces + 2 * i - 2 - j] = base[j];
        }
        cout << row << '\n';
        // Clear row
        fill(row.begin(), row.end(), ' ');
    }
    return 0;
}