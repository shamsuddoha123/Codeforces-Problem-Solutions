#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t,i,count;
    cin>>t;
    cin.ignore();//ignore the newline character after reading t
    while (t--)
    {
        string s;
        cin>>s;
        count=0;
        for(i=0;i<10;i++)
        {
            if(s[i]!="codeforces"[i])
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}