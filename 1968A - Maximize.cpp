#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        if(x==2)
        {
            cout<<"1\n";
        }
        else
        {
            cout<<(x-1)<<"\n";
        }
    }
    return 0;
}