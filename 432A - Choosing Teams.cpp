#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, i, count = 0;
    cin >> n >> k;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] < 5)
        {
            if (5 - arr[i] >= k)
            {
                count++;
            }
        }
    }
    if (count >= 3)
    {
        cout << count / 3 << endl;
    }
    else
    {
        cout << 0 << endl;
    }
    return 0;
}
