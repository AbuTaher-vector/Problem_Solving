#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
     vector<ll>v(4);
     nn cnt=0;
     for(nn i=0;i<4;i++) cin>>v[i];
          for(nn i=0;i<4;i++) if(v[i]%2==0) cnt++;
        if(cnt>=3) cout<<"Yes"<<nl;
        else
        {
             cnt=0;
             if(v[1]>0 && v[2]>0 && v[0]>0)
             {
                   v[0]--;
                   v[1]--;
                   v[2]--;
                   v[3]+=3;
             }
              for(nn i=0;i<4;i++) if(v[i]%2==0) cnt++;
               if(cnt>=3) cout<<"Yes"<<nl;
               else cout<<"No"<<nl;

        }
}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();
}