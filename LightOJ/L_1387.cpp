#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
    nn tt;
    cin>>tt;
    for(nn i=1;i<=tt;i++)
    {
        nn x;
    cin>>x;
    nn sum=0,t;
    ss s1;
    cout<<"Case "<<i<<":"<<endl;
    while(x--)
    {
        cin>>s1;
        if(s1=="donate")
        {
            cin>>t;
            sum+=t;
        }
        else if(s1=="report") cout<<sum<<endl;

    }

    }

}
