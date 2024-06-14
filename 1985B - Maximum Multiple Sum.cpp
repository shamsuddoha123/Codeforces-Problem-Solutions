#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int max_sum = 0;
        int optimal_x = 2;

        for (int x = 2; x <= n; ++x)
        {
            int current_sum = 0;

            for (int i = x; i <= n; i += x)
            {
                current_sum += i;
            }

            if (current_sum > max_sum)
            {
                max_sum = current_sum;
                optimal_x = x;
            }
        }

        cout << optimal_x << endl;
    }

    return 0;
}