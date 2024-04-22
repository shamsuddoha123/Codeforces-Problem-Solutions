#include<iostream>
using namespace std;
int main()
{
    int t,n,a,b,i,maxB,w;
    cin>>t;
    while(t--)
    {
        maxB=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a>>b;
            if(a<=10 && b>maxB)
            {
                maxB=b;
                w=i;
            }
        }
        cout<<w+1<<endl;
    }
}