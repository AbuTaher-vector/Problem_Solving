#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int main()
{

     nn tt;
     cin>>tt;
      for(nn i=1;i<=tt;i++)
      {
        ll x;
        cin>>x;
        nn k,cnt=0;
        while(1)
        {
            if(x==0) break;
            k=x%2;
            x/=2;
            if(k==1) cnt++;

        }
        cout<<"Case "<<i<<": ";
        if(cnt%2==0) cout<<"even"<<nl;
        else cout<<"odd"<<nl;
      }
}