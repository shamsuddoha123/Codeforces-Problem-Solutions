#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, i, d, count = 0;
    cin >> n >> k;
    d = 240 - k;
    for (i = 1; i <= n; i++)
    {
        if ((d - (5 * i)) >= 0)
        {
            count++;
            d = d - (5 * i);
        }
    }
    cout << count << endl;
}