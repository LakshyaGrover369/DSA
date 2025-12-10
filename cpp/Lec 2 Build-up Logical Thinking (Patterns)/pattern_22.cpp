// 4444444
// 4333334
// 4322234
// 4321234
// 4322234
// 4333334
// 4444444

//----------------------------------
// BRUTE FORCE APPROACH (Nested loops)
//----------------------------------
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n = 4;
    int size = 2 * n - 1;

    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= size; j++)
        {
            int dist = min({i - 1, j - 1, size - i, size - j});
            cout << n - dist;
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
#include <algorithm>
using namespace std;

int main()
{
    int n = 4;
    int size = 2 * n - 1;
    string line;

    for (int i = 1; i <= size; i++)
    {
        line.clear();
        line.reserve(size);

        for (int j = 1; j <= size; j++)
        {
            int dist = min({i - 1, j - 1, size - i, size - j});
            line += char('0' + n - dist);
        }
        cout << line << '\n';
    }
    return 0;
}

//----------------------------------
// BEST APPROACH (Pre-calculated distances + buffer reuse)
//----------------------------------
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n = 4;
    int size = 2 * n - 1;
    string row;
    row.reserve(size);

    // Pre-calculate distances to border for each index
    int dist[15];
    for (int i = 0; i < size; i++)
    {
        dist[i] = min(i, size - 1 - i);
    }

    // Build each row using pre-calculated distances
    for (int i = 0; i < size; i++)
    {
        row.clear();
        int dist_i = dist[i];

        for (int j = 0; j < size; j++)
        {
            int min_dist = min(dist_i, dist[j]);
            row += char('0' + n - min_dist);
        }
        cout << row << '\n';
    }
    return 0;
}