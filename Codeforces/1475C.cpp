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
    while(tt--)
    {
        ll a,b,c,cnt=0;
        cin>>a>>b>>c;
        map<ll,ll>mp1,mp2;
        ll ar[c+1],arr[c+1];
        for(nn i=0;i<c;i++)
        {
            cin>>ar[i];
            mp1[ar[i]]++;
        }
        for(nn i=0;i<c;i++)
        {
            cin>>arr[i];
            mp2[arr[i]]++;
        }
        for(nn i=0;i<c;i++)
        {
            cnt+=c-(mp1[ar[i]]+mp2[arr[i]])+1;


        }
      cout<<cnt/2<<endl;


    }

}