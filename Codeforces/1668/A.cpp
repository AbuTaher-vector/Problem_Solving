#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{

    ll r,c;
    cin>>r>>c;
    if((r==1 && c>2) || (r>2 && c==1))
    {
     cout<<-1<<nl;
    }
    else
    {
      ll ans=(min(r,c)-1)*2;
    ll k=max(r,c)-min(r,c);
    if(k%2==0) ans+=(k*2);
    else ans+=((k-1)*2)+1;
     cout<<ans<<nl;

    }
   



    

}
int main()
{
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("outputt.txt", "w", stdout);
     #endif

     nn tt;
     cin>>tt;
     while(tt--) code();
}