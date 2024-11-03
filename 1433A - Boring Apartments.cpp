#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        long long x;
        cin >> x;

        for (int i = 1; i <= 9; i++)
        {
            if (x == i * 1)
            {
                cout << (i - 1) * 10 + 1 << endl;
                ;
            }
            else if (x == i * 11)
            {
                cout << (i - 1) * 10 + 3 << endl;
            }
            else if (x == i * 111)
            {
                cout << (i - 1) * 10 + 6 << endl;
            }
            else if (x == i * 1111)
            {
                cout << (i - 1) * 10 + 10 << endl;
            }
        }
    }

    return 0;
}