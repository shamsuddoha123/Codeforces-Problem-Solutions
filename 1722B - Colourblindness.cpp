#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string str1,str2;
        cin>>str1>>str2;
        for(char &c : str1)
        {
            if(c=='B')
            {
                c='G';
            }
        }
        for(char &c : str2)
        {
            if(c=='B')
            {
                c='G';
            }
        }
        if(str1==str2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}