#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t; // Number of test cases
    while (t--)
    {
        long long n;
        cin >> n;

        // Keep dividing n by 2 if it's even
        while (n % 2 == 0)
        {
            n /= 2;
        }

        // After dividing by 2, if n becomes 1, it's a power of 2 (no odd divisor)
        if (n == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
