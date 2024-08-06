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

        int sum_of_digits = (n / 10) + (n % 10);
        cout << sum_of_digits << endl;
    }

    return 0;
}