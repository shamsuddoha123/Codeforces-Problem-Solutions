#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    double x,y,sum=0.0,result=0.0;
    cin>>t;
    while(t--)
    {
        sum=0.0,result=0.0;
        cin>>x>>y;
        sum+=x+(4*y);
        result=sum/15.0;
        if(ceil(result)<=ceil(y/2))
        {
            cout<<ceil(y/2)<<endl;
        }
        else
        {
            cout<<ceil(result)<<endl;
        }
    }
    return 0;
}