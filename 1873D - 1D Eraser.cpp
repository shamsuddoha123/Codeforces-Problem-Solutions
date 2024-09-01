#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, t, k, count;
    string str;
    cin >> t;
    while (t--)
    {
        count = 0;
        cin >> n >> k;
        cin >> str;
        for (i = 0; i < n;)
        {
            if (str[i] == 'B')
            {
                count++;
                i += k;
            }
            else
            {
                i++;
            }
        }
        cout << count << endl;
    }
    return 0;
}