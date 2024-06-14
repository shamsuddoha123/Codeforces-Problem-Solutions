#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

pair<int, int> findCenter(int n, int m, const vector<string> &grid)
{
    int sumX = 0, sumY = 0, count = 0;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (grid[i][j] == '#')
            {
                sumX += i + 1;
                sumY += j + 1;
                count++;
            }
        }
    }

    int centerX = sumX / count;
    int centerY = sumY / count;

    return {centerX, centerY};
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> grid(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> grid[i];
        }

        pair<int, int> center = findCenter(n, m, grid);
        cout << center.first << " " << center.second << endl;
    }

    return 0;
}