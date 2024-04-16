#include<iostream>
using namespace std;
int main()
{
    int t,n,i,num,odd,even;
    cin>>t;
    while(t--)
    {
        odd=even=0;
        cin>>n;
        for(i=0;i<(2*n);i++)
        {
            cin>>num;
            if(num%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if(even==odd)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}