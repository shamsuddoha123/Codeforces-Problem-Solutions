#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 0, b = 0, n, m, count = 0, count1 = 0;
    cin >> n >> m;
    while (a <= n && a <= m)
    {
        while (b <= n && b <= m)
        {
            if ((a * a + b) == n && (a + b * b) == m)
            {
                count++;
                count1 = count;
            }
            else
            {
                count = 0;
            }
            b++;
        }
        b = 0;
        a++;
    }
    cout << count1 << endl;
    return 0;
}