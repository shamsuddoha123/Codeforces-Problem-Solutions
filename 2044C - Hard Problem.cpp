#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long m, a, b, c, sum = 0, due = 0;
        cin >> m >> a >> b >> c;
        if (m >= a)
        {
            sum += a;
            due += m - a;
        }
        else
        {
            sum += m;
        }
        if (m >= b)
        {
            sum += b;
            due += m - b;
        }
        else
        {
            sum += m;
        }
        if (due >= c)
        {
            sum += c;
        }
        else
        {
            sum += due;
        }
        cout << sum << endl;
    }
    return 0;
}