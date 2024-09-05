#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[101];
    int n, i, sum = 0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (i = 0; i < n - 1; i++)
    {
        sum += arr[n - 1] - arr[i];
    }
    cout << sum << endl;
    return 0;
}