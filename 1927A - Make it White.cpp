#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t,n,i,start,end;
    string str;
    cin>>t;
    while(t--)
    {
        start=end=0;
        cin>>n;
        cin>>str;
        for(i=0;i<n;i++)
        {
            if(str[i]=='B')
            {
                start=i;
                break;
            }
        }
        for(i=(n-1);i>0;i--)
        {
            if(str[i]=='B')
            {
                    end=i;
                    break;
            }
        }
        cout<<(end-start)+1<<endl;
    }
    return 0;
}