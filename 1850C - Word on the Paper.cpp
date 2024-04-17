#include<iostream>
#include<string>
using namespace std;
int main()
{
    char arr[8][8];
    string ans;
    int t,i,j;
    cin>>t;
    while(t--)
    {
        ans="";
        for(i=0;i<8;i++)
        {
            for(j=0;j<8;j++)
            {
                cin>>arr[i][j];
                if(arr[i][j]!='.')
                {
                    ans+=arr[i][j];
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}