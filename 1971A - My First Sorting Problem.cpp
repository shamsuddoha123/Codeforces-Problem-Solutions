#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int t, arr[2];
    cin >> t;
    while (t--)
    {
        cin >> arr[0] >> arr[1];
        sort(arr, arr + 2);
        for (int x : arr)
        {
            cout << x << " ";
        }
    }
}
