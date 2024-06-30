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
        if (n % 7 == 0)
        {
            cout << n << endl;
            continue;
        }
        for (int i = 0; i <= 9; i++)
        {
            int new_num = n - (n % 10) + i;
            if (new_num % 7 == 0)
            {
                cout << new_num << endl;
                break;
            }
        }
    }
    return 0;
}