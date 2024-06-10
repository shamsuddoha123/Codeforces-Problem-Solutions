#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, count = 0;
    string s;
    cin >> n >> s;
    for (i = 0; i < n; i++)
    {
        if (s.substr(i, 3) == "xxx")
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}