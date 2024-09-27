#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, i, odd = 0, even = 0;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i % 2 != arr[i] % 2)
            {
                if (arr[i] % 2 != 0)
                {
                    odd++;
                }
                else
                {
                    even++;
                }
            }
        }
        if (even != odd)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << even << endl;
        }
    }
    return 0;
}