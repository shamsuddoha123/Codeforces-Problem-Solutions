#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, m, i;
    int a[10];
    cin >> t;
    while (t--)
    {
        cin >> m;
        for (i = 0; i < 10; i++)
        {
            a[i] = m - pow(10, i);
        }
        sort(a, a + 10);
        for (i = 0; i < 10; i++)
        {
            if (a[i] >= 0)
            {
                cout << a[i] << endl;
                break;
            }
        }
    }
}