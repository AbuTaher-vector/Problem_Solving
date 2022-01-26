#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
    ll tt;
    cin>>tt;
    for(nn j=1;j<=tt;j++)
    {
        nn a,sum=0;
        cin>>a;
        while(a--)
        {
            nn x;
            cin>>x;
            if(x>0) sum+=x;
        }

        cout<<"Case "<<j<<": "<<sum<<endl;;

    }

}

