#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t,n,i,j,count;
    string str;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>str;
        count=0;
        for(i=65;i<=90;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==str[j])
                {
                    count++;
                    break;
                }
            }
        }
        cout<<((count*2)+(n-count))<<endl;
    }
    return 0;
}