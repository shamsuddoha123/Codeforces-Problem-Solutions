#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, s, m;
        cin >> n >> s >> m;

        vector<pair<int, int>> intervals(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> intervals[i].first >> intervals[i].second;
        }

        bool canShower = false;

        // Sort intervals by their starting times
        sort(intervals.begin(), intervals.end());

        // Check the gap before the first interval
        if (intervals[0].first >= s)
        {
            canShower = true;
        }

        // Check the gaps between intervals
        for (int i = 1; i < n && !canShower; ++i)
        {
            if (intervals[i].first - intervals[i - 1].second >= s)
            {
                canShower = true;
            }
        }

        // Check the gap after the last interval
        if (m - intervals[n - 1].second >= s)
        {
            canShower = true;
        }

        if (canShower)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}