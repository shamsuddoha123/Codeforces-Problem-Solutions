#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int left = 0, right = n - 1, sereja = 0, dima = 0, t = 0;

    while (left <= right)
    {
        if (arr[left] > arr[right])
        {
            if (t % 2 == 0)
            {
                sereja += arr[left];
            }
            else
            {
                dima += arr[left];
            }
            left++;
        }
        else
        {
            if (t % 2 == 0)
            {
                sereja += arr[right];
            }
            else
            {
                dima += arr[right];
            }
            right--;
        }
        t++;
    }

    cout << sereja << " " << dima << endl;

    return 0;
}
