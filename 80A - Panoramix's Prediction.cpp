#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, i, j;
    cin >> n >> m;
    int flag = 0;
    int counter = 0;
    for (i = n + 1; i <= m; i++)
    {
        counter = 0;
        for (j = 2; j <= ((i / 2) + 1); j++)
        {
            if (i % j == 0)
            {
                counter++;
            }
        }
        if (counter == 0)
        {
            if (i == m)
            {
                cout << "YES" << endl;
                flag = 1;
                break;
            }
            else
            {
                cout << "NO" << endl;
                flag = 1;
                break;
            }
        }
    }
    if (flag == 0)
    {
        cout << "NO" << endl;
    }
    return 0;
}