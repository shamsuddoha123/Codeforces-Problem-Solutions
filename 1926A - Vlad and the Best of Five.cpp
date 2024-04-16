#include<iostream>
using namespace std;
int main()
{
    char str[6];
    int t,i,countA,countB;
    cin>>t;
    while(t--)
    {
        countA=countB=0;
        cin>>str;
        for(i=0;i<5;i++)
        {
            if(str[i]=='A')
            {
                countA++;
            }
            else if(str[i]=='B')
            {
                countB++;
            }
        }
        if(countA>countB)
        {
            cout<<"A"<<endl;
        }
        else if(countA<countB)
        {
            cout<<"B"<<endl;
        }
    }
    return 0;
}