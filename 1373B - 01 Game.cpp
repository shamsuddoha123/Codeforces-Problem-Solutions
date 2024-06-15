#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int ones = 0, zeros = 0;
        for (char ch : str)
        {
            if (ch == '1')
                ones++;
            else
                zeros++;
        }
        if (min(ones, zeros) % 2 == 0)
        {
            cout << "NET" << endl;
        }
        else
        {
            cout << "DA" << endl;
        }
    }
}