#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
    nn  tt;
    cin>>tt;
    while(tt--)
    {
        nn x,a,b,sum=0,s=0,sum2=0,s1=0;
        cin>>a;

         while(a--)
        {
            cin>>x;
            sum+=x;
            s=max(s,sum);
        }
        cin>>b;
         while(b--)
        {
            cin>>x;
            sum2+=x;
            s1=max(s1,sum2);
        }
        cout<<s+s1<<endl;
    }

}