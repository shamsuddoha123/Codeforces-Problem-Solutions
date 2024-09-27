#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, i = 0, sum = 0;
    string ch;
    cin >> a >> b >> c >> d;
    cin >> ch;
    while (i < ch.length())
    {
        if (ch[i] == '1')
        {
            sum += a;
        }
        else if (ch[i] == '2')
        {
            sum += b;
        }
        else if (ch[i] == '3')
        {
            sum += c;
        }
        else if (ch[i] == '4')
        {
            sum += d;
        }
        i++;
    }
    cout << sum << endl;
    return 0;
}