#include<iostream>
using namespace std;
int main()
{
    int t,x,y,n,max_multiple,answer;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>n;
        max_multiple=(n-y)/x;
        answer=x*max_multiple+y;
        if(answer>n)
        {
            answer-=x;
        }
        cout<<answer<<endl;
    }
    return 0;
}

/*
#include<iostream>
using namespace std;
int main()
{
    long long int i,t,x,y,n;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>n;
        for(i=n;i>=0;i--)
        {
            if((i%x)==y)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
}
*/